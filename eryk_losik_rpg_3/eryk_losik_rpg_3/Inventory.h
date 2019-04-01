#pragma once
#include "Character.h"
#include "Armor.h"
#include "Coffee.h"
#include "Weapon.h"
#include <vector>
class Inventory
{
private:
	vector<Weapon> weapons;
	vector<Armor> armors;
	vector<Coffee> coffies;
	int limitWeapon = 3;
	int limitArmor = 5;
	int limitCoffee = 7;
public:
	Inventory();
	~Inventory();
	void addWeapon(Weapon weapon);
	void addArmor(Armor armor);
	void addCoffee(Coffee coffee);
	void deleteWeapon(int index);
	void deleteArmor(int index);
	void deleteCoffee(int index);
	vector<Weapon> getWeapons() {
		return weapons;
	}
	vector<Armor> getArmors() {
		return armors;
	}
	vector<Coffee> getCoffies() {
		return coffies;
	}
};