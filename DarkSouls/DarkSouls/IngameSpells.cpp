#include "IngameSpells.h"

void IngameSpells::addSpell(const char* name, size_t damageScalerInPrc, size_t mana, size_t neededMaxmana)
{
	Spell customSpell(name, damageScalerInPrc, mana, neededMaxmana);
	allSpells.add(customSpell);
}

IngameSpells::IngameSpells()
{

}
