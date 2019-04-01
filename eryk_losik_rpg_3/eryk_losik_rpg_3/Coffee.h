#pragma once
#include "Item.h"
class Coffee : public Item
{
private:
	string name;
	int stamina;
	int hp;
	int strength;
public:
	Coffee(string name, int stamina, int hp, int strength);
	~Coffee();
	string getName();
	int getStamina();
	int getHp();
	int getStrength();
};