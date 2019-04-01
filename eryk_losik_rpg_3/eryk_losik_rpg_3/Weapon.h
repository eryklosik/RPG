#pragma once
#include "Item.h"

class Weapon : public Item
{
private:
	string name;
	int damage;
	string description;
public:
	Weapon(string name, int damage, string description);
	~Weapon();
	string getName();
	int getDamage();
	string getDescription();
};