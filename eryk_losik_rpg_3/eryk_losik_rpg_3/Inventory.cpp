//#include "stdafx.h"
#include "pch.h"
#include "Inventory.h"
#include "Character.h"

Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

void Inventory::addWeapon(Weapon weapon) {
	if (int(weapons.size()) < limitWeapon) {
		weapons.push_back(weapon);
	}
	else
	{
		throw "Your Weapon Inventory is full";
	}
}
void Inventory::addArmor(Armor armor) {
	if (int(armors.size()) < limitArmor) {
		armors.push_back(armor);
	}
	else
	{
		throw "Your Armor Inventory is full";
	}
}
void Inventory::addCoffee(Coffee coffee) {
	if (int(coffies.size()) < limitCoffee) {
		coffies.push_back(coffee);
	}
	else
	{
		throw "Your Coffee Inventory is full";
	}
}

void Inventory::deleteWeapon(int index) {
	weapons.erase(weapons.begin() + index);
}
void Inventory::deleteArmor(int index) {
	armors.erase(armors.begin() + index);
}
void Inventory::deleteCoffee(int index) {
	coffies.erase(coffies.begin() + index);
}