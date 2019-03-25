#pragma once
#include "Character.h"
#include "Opponent.h"
using namespace std;

class Player : public Character
{
private:
	int* items;
public:
	Player(string name, int hp, int strength, int stamina, int defence, int inventorySize);
	Player();
	~Player();
	void heal();
	void defence();
	void attack(Opponent opponent);
};