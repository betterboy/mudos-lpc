
#ifndef __VAR_PROP_H__

#define __VAR_PROP_H__

// 存在内存中的变量，重启消失
static string * _GMemoryArray = [];

#define InsertArry(_Arr,value) _Arr += [value]
#define RemoveArry(_Arr,value) _Arr -= [value]

//update时会丢失的变量?  // 不一定，和restore_object参数有关!请注意restore_object()的参数
#define RESET_ONUPDATE_VAR(var, def) \
	static mixed var = def; \
	mixed Get##var() { return var; }\
	void Set##var(mixed value) { var=value; }  


//存在内存中的变量，update时还保存
#define MEMORY_VAR(var, def) \
	mixed var = (InsertArry(_GMemoryArray, "##var"), def); \
	mixed Get##var() { return var; }\
	void Set##var(mixed value) { var=value; }  \
	void Clear##var() { var=def; }

// 私有的 MEMORY_VAR
#define STATIC_MEMORY_VAR(var, def)                                 \
    static mixed var = (InsertArry(_GMemoryArray, "##var"), def);   \
    static mixed Get##var() { return var; }                         \
    static void Set##var(mixed value) { var = value; }              \
    static void Clear##var() { var = def; }

#define DECALTE_GLOBAL_VAR(var) \
	void SetGlobal_##var(mixed mar) { mpGlobal["##var"] = mar; }\
	mixed GetGlobal_##var() { return mpGlobal["##var"]; }


string *GetMemoryArray()
{
	return _GMemoryArray;
}

// SetVarsValue
void SetVarsValue(mapping mpVars)
{
	foreach(string _key, string _value in mpVars)
	{
		call_other(this_object(), "Set"+_key, _value);
	}
}
// GetVarsValue
mapping GetVarsValue()
{
	mapping mpVars = {};
	string * AllSaveVars;
	//AllSaveVars = _GMemoryArray + _GDBArray;

	//update会把存盘的数据刷一遍给db，然后在create函数里从db那里把存盘的数据给load回来了，
	//也就是重新构建了新的存盘mapping的脏数据，所以这里不需要恢复存盘的数据.
	//否则就会crash, 因为老的脏数据通过svalue_t *指针引用了
	//老object的 variables的地址,而老的object已经被destruct了。
	AllSaveVars = _GMemoryArray;

	// return zero where none vars to save.
	if(sizeof(AllSaveVars)) {
		foreach(string each in AllSaveVars) {
			mpVars[each] = call_other(this_object(), "Get"+each);
		}
	}

	// 当this_object()为继承时，我们需要恢复base已经定义的变量, 需要将变量一并取出来, chenyh
	mixed *inherit_obs = deep_inherit_list();
	if (sizeof(inherit_obs)) {
		foreach (mixed inherit_file in inherit_obs) {
			object oInheritOb = find_object(inherit_file, 1);
			if (!objectp(oInheritOb) || !function_exists("GetMemoryArray", oInheritOb)) continue;
			AllSaveVars = call_other(oInheritOb, "GetMemoryArray");
			if (sizeof(AllSaveVars)) {
				foreach(string each in AllSaveVars) {
					if (!undefinedp(mpVars[each])) continue;
					mpVars[each] = call_other(this_object(), "Get"+each);
				}
			}
		}
	}
	return mpVars;
}


#ifdef __TEST__
RESET_ONUPDATE_VAR(cName, "abc")
MEMORY_VAR( HaHa, 99999)

int main()
{
	debug_message(GetcName() );
	debug_message(sprintf("%O", HaHa) );
	debug_message(sprintf("%O", GetSaveName()) );
}

#endif


#endif // __VAR_PROP_H__
