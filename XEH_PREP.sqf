//#include "config_macros.hpp"
#define PREP(var1) FUNC(var1) = compile preProcessFileLineNumbers QUOTE(ADDON\functions\CONCAT(fnc_,var1).sqf);
PREP(getJetpack)
PREP(rechargePack)