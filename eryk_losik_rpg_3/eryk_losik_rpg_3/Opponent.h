#pragma once
#include "Character.h"
#include <string>
class Opponent : public Character
{
private:
	int weapon;
	string battlecry;
public:
	Opponent(string name, int hp, int strength, int stamina, int defence, int inventorySize);
	Opponent();
	~Opponent();

	string getBattlecry();
};