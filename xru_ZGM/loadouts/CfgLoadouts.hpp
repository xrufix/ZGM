#include "common\macros.hpp"
#include "common\traits.hpp"

#include "common\baseclasses.hpp"

#define COMMON Common##FACTION
#define LOADOUT(var1,var2) TRIPLES(FACTION,var1,var2)

#include "factions.hpp"