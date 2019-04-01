#pragma once
//#include "Character.h"
#include "Opponent.h"
//#include "Item.h"
#include "Inventory.h"

using namespace std;

class Player : public Character
{
private:
	int* items;
	Inventory inventory = Inventory();

public:
	Player(string name, int hp, int strength, int stamina, int defence, int inventorySize);
	Player();
	~Player();
	void attack(Opponent opponent);
	void heal();
	void defence();
	Inventory &getInventory() {
		return inventory;
	}
	
};