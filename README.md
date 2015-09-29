open notepad++ and copy this line in it.

"LootTableCompiler.exe" "z:\arma3 test\ExileLootPrecompiler\LootTable.h" "z:\arma3 test\ExileLootPrecompiler\CfgLootTables.hpp"

with the correct location of the files and save it as loot.bat

double click on loot.bat and it generates a CfgLootTables.hpp

copy and replace the content of this file in config.cpp in your exile_server_config.pbo exactly after the part

class Land_Research_HQ_F and in the class CfgLootTables


