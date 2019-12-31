#define ADDON MIRA_RD501_JetpackUtil
#define ADDON_NAME RD501 Jetpack Utilities
#define FUNC(name) ADDON##_fnc_##name
#define ICON_PATH(name) ADDON##\ui\##name##.paa
#define QUOTE(target) #target
#define CONCAT(a,b) a##b
#define COMPILE_FILE(name) compile preprocessFileLineNumbers 'ADDON\##name##.sqf'
#define GVAR(name) ADDON##_##name
#define QGVAR(name) QUOTE(GVAR(name))
#define QEGVAR(module,name) QUOTE(CONCAT(ace_,module)CONCAT(_,name))
#define EFUNC(module,name) CONCAT(CONCAT(CONCAT(ace_,module),_fnc_),name)
#define ARR_2(a,b) a, b
#define ARR_3(a,b,c) a, b, c
#define ARR_4(a,b,c,d) a, b, c, d
#define ARR_5(a,b,c,d,e) a, b, c, d, e
#define DRAG_ANIMATIONS [ARR_2(ARR_5("amovpercmstpslowwrfldnon_acinpknlmwlkslowwrfldb_2", "amovpercmstpsraswpstdnon_acinpknlmwlksnonwpstdb_2", "amovpercmstpsnonwnondnon_acinpknlmwlksnonwnondb_2", "acinpknlmstpsraswrfldnon", "acinpknlmstpsnonwpstdnon"), ARR_3("acinpknlmstpsnonwnondnon", "acinpknlmwlksraswrfldb", "acinpknlmwlksnonwnondb"))]