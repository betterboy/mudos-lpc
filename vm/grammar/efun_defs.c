/*
	This file is automatically generated by make_func.
	do not make any manual changes to this file.
*/

{
{"acos",F_ACOS,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"all_previous_objects",F_PREVIOUS_OBJECT | F_ALIAS_FLAG,0,0,1,1,TYPE_MOD_ARRAY|TYPE_OBJECT,T_NUMBER,T_ANY,T_ANY,T_ANY,18,-1},
{"allocate",F_ALLOCATE,0,0,1,1,TYPE_MOD_ARRAY|TYPE_ANY,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"allocate_buffer",F_ALLOCATE_BUFFER,0,0,2,2,TYPE_BUFFER,T_NUMBER,T_NUMBER,T_ANY,T_ANY,57,0},
{"allocate_mapping",F_ALLOCATE_MAPPING,0,0,1,1,TYPE_MAPPING,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"arrayp",F_POINTERP | F_ALIAS_FLAG,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"asin",F_ASIN,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"atan",F_ATAN,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"boot_time",F_BOOT_TIME,0,0,0,0,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"bufferp",F_BUFFERP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"call_other",F_CALL_OTHER,0,0,2,-1,TYPE_ANY,T_OBJECT|T_STRING|T_ARRAY,T_STRING|T_ARRAY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"call_stack",F_CALL_STACK,0,0,1,1,TYPE_MOD_ARRAY|TYPE_ANY,T_NUMBER,T_ANY,T_ANY,T_ANY,18,0},
{"ceil",F_CEIL,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"children",F_CHILDREN,0,0,1,1,TYPE_MOD_ARRAY|TYPE_OBJECT,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"classp",F_CLASSP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"clear_bit",F_CLEAR_BIT,0,0,2,2,TYPE_STRING,T_STRING,T_NUMBER,T_ANY,T_ANY,50,DEFAULT_NONE},
{"clone_object",F_CLONE_OBJECT,0,0,1,-1,TYPE_OBJECT,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"clonep",F_CLONEP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_THIS_OBJECT},
{"copy",F_COPY,0,0,1,1,TYPE_ANY,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"cos",F_COS,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"cp",F_CP,0,0,2,2,TYPE_NUMBER,T_STRING,T_STRING,T_ANY,T_ANY,25,DEFAULT_NONE},
{"ctime",F_CTIME,0,0,1,1,TYPE_STRING,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"debug_info",F_DEBUG_INFO,0,0,2,2,TYPE_ANY,T_NUMBER,T_OBJECT,T_ANY,T_ANY,145,DEFAULT_NONE},
{"debug_message",F_DEBUG_MESSAGE,0,0,1,-1,TYPE_NOVALUE,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"deep_inherit_list",F_DEEP_INHERIT_LIST,0,0,1,1,TYPE_MOD_ARRAY|TYPE_STRING,T_OBJECT,T_ANY,T_ANY,T_ANY,23,DEFAULT_THIS_OBJECT},
{"destruct",F_DESTRUCT,0,0,1,1,TYPE_NOVALUE,T_OBJECT,T_ANY,T_ANY,T_ANY,23,DEFAULT_NONE},
{"dump_file_descriptors",F_DUMP_FILE_DESCRIPTORS,0,0,0,0,TYPE_STRING,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"dump_prog",F_DUMP_PROG,0,0,1,-1,TYPE_NOVALUE,T_OBJECT,T_ANY,T_ANY,T_ANY,149,DEFAULT_NONE},
{"dumpallobj",F_DUMPALLOBJ,0,0,0,1,TYPE_NOVALUE,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"error",F_ERROR,0,0,1,1,TYPE_NOVALUE,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"eval_cost",F_SET_EVAL_LIMIT | F_ALIAS_FLAG,0,0,1,1,TYPE_NUMBER,T_NUMBER,T_ANY,T_ANY,T_ANY,18,-1},
{"evaluate",F_EVALUATE,0,0,1,-1,TYPE_ANY,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"explode",F_EXPLODE,0,0,2,2,TYPE_MOD_ARRAY|TYPE_STRING,T_STRING,T_STRING,T_ANY,T_ANY,25,DEFAULT_NONE},
{"fetch_variable",F_FETCH_VARIABLE,0,0,1,1,TYPE_ANY,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"file_length",F_FILE_LENGTH,0,0,1,1,TYPE_NUMBER,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"file_name",F_FILE_NAME,0,0,1,1,TYPE_STRING,T_OBJECT,T_ANY,T_ANY,T_ANY,23,DEFAULT_THIS_OBJECT},
{"file_size",F_FILE_SIZE,0,0,1,1,TYPE_NUMBER,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"filter_array",F_FILTER_ARRAY,0,0,2,-1,TYPE_ANY,T_ARRAY,T_STRING|T_FUNCTION,T_ANY,T_ANY,125,DEFAULT_NONE},
{"filter_mapping",F_FILTER_MAPPING,0,0,2,-1,TYPE_MAPPING,T_MAPPING,T_STRING|T_FUNCTION,T_ANY,T_ANY,131,DEFAULT_NONE},
{"find_object",F_FIND_OBJECT,0,0,2,2,TYPE_OBJECT,T_STRING,T_NUMBER,T_ANY,T_ANY,50,0},
{"floatp",F_FLOATP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"floor",F_FLOOR,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"fs_memory_info",F_FS_MEMORY_INFO,0,0,0,0,TYPE_STRING,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"func_in_example_lib",F_FUNC_IN_EXAMPLE_LIB,0,0,1,1,TYPE_NUMBER,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"function_exists",F_FUNCTION_EXISTS,0,0,1,3,TYPE_STRING,T_STRING,T_OBJECT,T_NUMBER,T_ANY,107,DEFAULT_NONE},
{"function_owner",F_FUNCTION_OWNER,0,0,1,1,TYPE_OBJECT,T_FUNCTION,T_ANY,T_ANY,T_ANY,32,DEFAULT_NONE},
{"functionp",F_FUNCTIONP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"functions",F_FUNCTIONS,0,0,2,2,TYPE_MOD_ARRAY|TYPE_STRING,T_OBJECT,T_NUMBER,T_ANY,T_ANY,109,0},
{"get_dir",F_GET_DIR,0,0,2,2,TYPE_MOD_ARRAY|TYPE_ANY,T_STRING,T_NUMBER,T_ANY,T_ANY,50,0},
{"get_host_ip",F_GET_HOST_IP,0,0,0,0,TYPE_MOD_ARRAY|TYPE_STRING,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"implode",F_IMPLODE,0,0,2,3,TYPE_ANY,T_ARRAY,T_STRING|T_FUNCTION,T_ANY,T_ANY,29,DEFAULT_NONE},
{"inherit_list",F_SHALLOW_INHERIT_LIST | F_ALIAS_FLAG,0,0,1,1,TYPE_MOD_ARRAY|TYPE_STRING,T_OBJECT,T_ANY,T_ANY,T_ANY,23,DEFAULT_THIS_OBJECT},
{"inherits",F_INHERITS,0,0,2,2,TYPE_NUMBER,T_STRING,T_OBJECT,T_ANY,T_ANY,83,DEFAULT_NONE},
{"intp",F_INTP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"keys",F_KEYS,0,0,1,1,TYPE_MOD_ARRAY|TYPE_ANY,T_MAPPING,T_ANY,T_ANY,T_ANY,61,DEFAULT_NONE},
{"load_object",F_FIND_OBJECT | F_ALIAS_FLAG,0,0,2,2,TYPE_OBJECT,T_STRING,T_NUMBER,T_ANY,T_ANY,50,1},
{"localtime",F_LOCALTIME,0,0,1,1,TYPE_MOD_ARRAY|TYPE_ANY,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"lower_case",F_LOWER_CASE,0,0,1,1,TYPE_STRING,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"lpc_gc",F_LPC_GC,0,0,1,1,TYPE_NOVALUE,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"malloc_status",F_MALLOC_STATUS,0,0,0,0,TYPE_STRING,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"map_array",F_MAP_ARRAY,0,0,2,-1,TYPE_MOD_ARRAY|TYPE_ANY,T_ARRAY,T_STRING|T_FUNCTION,T_ANY,T_ANY,125,DEFAULT_NONE},
{"map_delete",F_MAP_DELETE,0,0,2,2,TYPE_NOVALUE,T_MAPPING,T_ANY,T_ANY,T_ANY,63,DEFAULT_NONE},
{"map_mapping",F_MAP_MAPPING,0,0,2,-1,TYPE_MAPPING,T_MAPPING,T_STRING|T_FUNCTION,T_ANY,T_ANY,131,DEFAULT_NONE},
{"mapp",F_MAPP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"max_array",F_MAX_ARRAY,0,0,1,2,TYPE_ANY,T_ARRAY,T_NUMBER,T_ANY,T_ANY,39,DEFAULT_NONE},
{"max_eval_cost",F_SET_EVAL_LIMIT | F_ALIAS_FLAG,0,0,1,1,TYPE_NUMBER,T_NUMBER,T_ANY,T_ANY,T_ANY,18,1},
{"md5_hexdigest",F_MD5_HEXDIGEST,0,0,1,1,TYPE_STRING,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"member_array",F_MEMBER_ARRAY,0,0,2,3,TYPE_NUMBER,T_ANY,T_STRING|T_ARRAY,T_NUMBER,T_ANY,36,DEFAULT_NONE},
{"memory_info",F_MEMORY_INFO,0,0,0,1,TYPE_NUMBER,T_OBJECT,T_ANY,T_ANY,T_ANY,23,DEFAULT_NONE},
{"min_array",F_MIN_ARRAY,0,0,1,2,TYPE_ANY,T_ARRAY,T_NUMBER,T_ANY,T_ANY,39,DEFAULT_NONE},
{"mkdir",F_MKDIR,0,0,2,2,TYPE_NUMBER,T_STRING,T_NUMBER,T_ANY,T_ANY,50,DEFAULT_NONE},
{"next_bit",F_NEXT_BIT,0,0,2,2,TYPE_NUMBER,T_STRING,T_NUMBER,T_ANY,T_ANY,50,DEFAULT_NONE},
{"nullp",F_UNDEFINEDP | F_ALIAS_FLAG,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"objectp",F_OBJECTP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"objects",F_OBJECTS,0,0,0,2,TYPE_MOD_ARRAY|TYPE_OBJECT,T_STRING|T_FUNCTION,T_OBJECT,T_ANY,T_ANY,113,DEFAULT_NONE},
{"os_command",F_OS_COMMAND,0,0,3,3,TYPE_NUMBER,T_STRING,T_STRING,T_STRING,T_ANY,43,DEFAULT_NONE},
{"pointerp",F_POINTERP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"pow",F_POW,0,0,2,2,TYPE_REAL,T_NUMBER|T_REAL,T_NUMBER|T_REAL,T_ANY,T_ANY,154,DEFAULT_NONE},
{"previous_object",F_PREVIOUS_OBJECT,0,0,1,1,TYPE_ANY,T_NUMBER,T_ANY,T_ANY,T_ANY,18,0},
{"program_info",F_PROGRAM_INFO,0,0,0,1,TYPE_STRING,T_OBJECT,T_ANY,T_ANY,T_ANY,23,DEFAULT_NONE},
{"query_load_average",F_QUERY_LOAD_AVERAGE,0,0,0,0,TYPE_STRING,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"random",F_RANDOM,0,0,1,1,TYPE_NUMBER,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"read_buffer",F_READ_BUFFER,0,0,1,3,TYPE_ANY,T_STRING|T_BUFFER,T_NUMBER,T_NUMBER,T_ANY,67,DEFAULT_NONE},
{"read_bytes",F_READ_BYTES,0,0,1,3,TYPE_STRING,T_STRING,T_NUMBER,T_NUMBER,T_ANY,101,DEFAULT_NONE},
{"read_file",F_READ_FILE,0,0,1,3,TYPE_STRING,T_STRING,T_NUMBER,T_NUMBER,T_ANY,101,DEFAULT_NONE},
{"reclaim_objects",F_RECLAIM_OBJECTS,0,0,0,0,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"refs",F_REFS,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"regexp",F_REGEXP,0,0,2,3,TYPE_ANY,T_STRING|T_ARRAY,T_STRING,T_NUMBER,T_ANY,87,DEFAULT_NONE},
{"reload_object",F_RELOAD_OBJECT,0,0,1,1,TYPE_OBJECT,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"rename",F_RENAME,0,0,2,2,TYPE_NUMBER,T_STRING,T_STRING,T_ANY,T_ANY,25,DEFAULT_NONE},
{"repeat_string",F_REPEAT_STRING,0,0,2,2,TYPE_STRING,T_STRING,T_NUMBER,T_ANY,T_ANY,50,DEFAULT_NONE},
{"replace_program",F_REPLACE_PROGRAM,0,0,1,1,TYPE_NOVALUE,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"replace_string",F_REPLACE_STRING,0,0,3,-1,TYPE_STRING,T_STRING,T_STRING,T_STRING,T_ANY,43,DEFAULT_NONE},
{"replace_string_reg",F_REPLACE_STRING_REG,0,0,3,3,TYPE_STRING,T_STRING,T_STRING,T_STRING,T_ANY,43,DEFAULT_NONE},
{"replaceable",F_REPLACEABLE,0,0,1,2,TYPE_NUMBER,T_OBJECT,T_ARRAY,T_ANY,T_ANY,137,DEFAULT_NONE},
{"reset_eval_cost",F_SET_EVAL_LIMIT | F_ALIAS_FLAG,0,0,1,1,TYPE_NUMBER,T_NUMBER,T_ANY,T_ANY,T_ANY,18,0},
{"restore_object",F_RESTORE_OBJECT,0,0,1,2,TYPE_NUMBER,T_STRING,T_NUMBER,T_ANY,T_ANY,50,DEFAULT_NONE},
{"rm",F_RM,0,0,1,1,TYPE_NUMBER,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"rmdir",F_RMDIR,0,0,1,1,TYPE_NUMBER,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"save_object",F_SAVE_OBJECT,0,0,1,2,TYPE_NUMBER,T_STRING,T_NUMBER,T_ANY,T_ANY,50,DEFAULT_NONE},
{"set_bit",F_SET_BIT,0,0,2,2,TYPE_STRING,T_STRING,T_NUMBER,T_ANY,T_ANY,50,DEFAULT_NONE},
{"set_eval_limit",F_SET_EVAL_LIMIT,0,0,1,1,TYPE_NUMBER,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"shallow_inherit_list",F_SHALLOW_INHERIT_LIST,0,0,1,1,TYPE_MOD_ARRAY|TYPE_STRING,T_OBJECT,T_ANY,T_ANY,T_ANY,23,DEFAULT_THIS_OBJECT},
{"shutdown",F_SHUTDOWN,0,0,0,1,TYPE_NOVALUE,T_NUMBER,T_ANY,T_ANY,T_ANY,18,DEFAULT_NONE},
{"sin",F_SIN,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"sizeof",F_SIZEOF,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"sort_array",F_SORT_ARRAY,0,0,2,-1,TYPE_MOD_ARRAY|TYPE_ANY,T_ARRAY,T_NUMBER|T_STRING|T_FUNCTION,T_ANY,T_ANY,118,DEFAULT_NONE},
{"sprintf",F_SPRINTF,0,0,1,-1,TYPE_STRING,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"sqrt",F_SQRT,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"stat",F_STAT,0,0,2,2,TYPE_MOD_ARRAY|TYPE_ANY,T_STRING,T_NUMBER,T_ANY,T_ANY,50,0},
{"store_variable",F_STORE_VARIABLE,0,0,2,2,TYPE_NOVALUE,T_STRING,T_ANY,T_ANY,T_ANY,141,DEFAULT_NONE},
{"strcmp",F_STRCMP,0,0,2,2,TYPE_NUMBER,T_STRING,T_STRING,T_ANY,T_ANY,25,DEFAULT_NONE},
{"stringp",F_STRINGP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"strlen",F_SIZEOF | F_ALIAS_FLAG,0,0,1,1,TYPE_NUMBER,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"strsrch",F_STRSRCH,0,0,3,3,TYPE_NUMBER,T_STRING,T_STRING|T_NUMBER,T_NUMBER,T_ANY,54,0},
{"substr",F_SUBSTR,0,0,3,3,TYPE_NUMBER,T_STRING,T_STRING|T_NUMBER,T_NUMBER,T_ANY,54,0},
{"tan",F_TAN,0,0,1,1,TYPE_REAL,T_REAL,T_ANY,T_ANY,T_ANY,152,DEFAULT_NONE},
{"test_bit",F_TEST_BIT,0,0,2,2,TYPE_NUMBER,T_STRING,T_NUMBER,T_ANY,T_ANY,50,DEFAULT_NONE},
{"this_object",F_THIS_OBJECT,0,0,0,0,TYPE_OBJECT,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"throw",F_THROW,0,0,1,1,TYPE_NOVALUE,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"time",F_TIME,0,0,0,-1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,3,DEFAULT_NONE},
{"to_float",F_TO_FLOAT,0,0,1,1,TYPE_REAL,T_STRING|T_REAL|T_NUMBER,T_ANY,T_ANY,T_ANY,16,DEFAULT_NONE},
{"to_int",F_TO_INT,0,0,1,1,TYPE_NUMBER,T_STRING|T_REAL|T_NUMBER|T_BUFFER,T_ANY,T_ANY,T_ANY,11,DEFAULT_NONE},
{"typeof",F_TYPEOF,0,0,1,1,TYPE_STRING,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"undefinedp",F_UNDEFINEDP,0,0,1,1,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,8,DEFAULT_NONE},
{"unique_mapping",F_UNIQUE_MAPPING,0,0,2,-1,TYPE_MAPPING,T_ARRAY,T_STRING|T_FUNCTION,T_ANY,T_ANY,125,DEFAULT_NONE},
{"upper_case",F_UPPER_CASE,0,0,1,1,TYPE_STRING,T_STRING,T_ANY,T_ANY,T_ANY,20,DEFAULT_NONE},
{"uptime",F_UPTIME,0,0,0,0,TYPE_NUMBER,T_ANY,T_ANY,T_ANY,T_ANY,0,DEFAULT_NONE},
{"values",F_VALUES,0,0,1,1,TYPE_MOD_ARRAY|TYPE_ANY,T_MAPPING,T_ANY,T_ANY,T_ANY,61,DEFAULT_NONE},
{"variables",F_VARIABLES,0,0,2,2,TYPE_MOD_ARRAY|TYPE_STRING,T_OBJECT,T_NUMBER,T_ANY,T_ANY,109,0},
{"write_buffer",F_WRITE_BUFFER,0,0,3,3,TYPE_NUMBER,T_STRING|T_BUFFER,T_NUMBER,T_STRING|T_BUFFER|T_NUMBER,T_ANY,74,DEFAULT_NONE},
{"write_bytes",F_WRITE_BYTES,0,0,3,3,TYPE_NUMBER,T_STRING,T_NUMBER,T_STRING|T_BUFFER,T_ANY,94,DEFAULT_NONE},
{"write_file",F_WRITE_FILE,0,0,2,-1,TYPE_NUMBER,T_STRING,T_STRING,T_ANY,T_ANY,45,DEFAULT_NONE},

};
int efun_arg_types[] = {
TYPE_OBJECT,TYPE_STRING,TYPE_MOD_ARRAY|TYPE_OBJECT,0,
TYPE_STRING,TYPE_MOD_ARRAY|TYPE_ANY,0,
0,
TYPE_ANY,0,
0,
TYPE_STRING,TYPE_REAL,TYPE_NUMBER,TYPE_BUFFER,0,
TYPE_STRING,TYPE_REAL,TYPE_NUMBER,0,
TYPE_STRING,0,
0,
TYPE_OBJECT,0,
TYPE_STRING,0,
TYPE_STRING,0,
TYPE_MOD_ARRAY|TYPE_ANY,0,
TYPE_STRING,TYPE_FUNCTION,0,
TYPE_ANY,0,
TYPE_ANY,0,
TYPE_STRING,TYPE_MOD_ARRAY|TYPE_ANY,0,
TYPE_NUMBER,0,
TYPE_STRING,0,
TYPE_STRING,0,
TYPE_STRING,0,
0,
TYPE_STRING,0,
TYPE_NUMBER,0,
TYPE_STRING,0,
TYPE_STRING,TYPE_NUMBER,0,
TYPE_NUMBER,0,
TYPE_MAPPING,0,
TYPE_MAPPING,0,
TYPE_ANY,0,
TYPE_STRING,TYPE_BUFFER,0,
TYPE_NUMBER,0,
TYPE_NUMBER,0,
TYPE_STRING,TYPE_BUFFER,0,
TYPE_NUMBER,0,
TYPE_STRING,TYPE_BUFFER,TYPE_NUMBER,0,
TYPE_STRING,0,
TYPE_OBJECT,0,
TYPE_STRING,TYPE_MOD_ARRAY|TYPE_STRING,0,
TYPE_STRING,0,
TYPE_NUMBER,0,
TYPE_STRING,0,
TYPE_NUMBER,0,
TYPE_STRING,TYPE_BUFFER,0,
TYPE_STRING,0,
TYPE_NUMBER,0,
TYPE_NUMBER,0,
TYPE_STRING,0,
TYPE_OBJECT,0,
TYPE_NUMBER,0,
TYPE_STRING,TYPE_FUNCTION,0,
TYPE_OBJECT,0,
TYPE_MOD_ARRAY|TYPE_ANY,0,
TYPE_NUMBER,TYPE_STRING,TYPE_FUNCTION,0,
0,
TYPE_MOD_ARRAY|TYPE_ANY,0,
TYPE_STRING,TYPE_FUNCTION,0,
0,
TYPE_MAPPING,0,
TYPE_STRING,TYPE_FUNCTION,0,
0,
TYPE_OBJECT,0,
TYPE_MOD_ARRAY|TYPE_STRING,0,
TYPE_STRING,0,
TYPE_ANY,0,
TYPE_NUMBER,0,
TYPE_OBJECT,0,
TYPE_OBJECT,0,
0,
TYPE_REAL,0,
TYPE_NUMBER,TYPE_REAL,0,
TYPE_NUMBER,TYPE_REAL,0,
};
