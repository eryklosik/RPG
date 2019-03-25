#pragma once
#include <string>
//#include "Opponent.h"
using namespace std;

class Character
{
private:
	string name;
	int hp;
	int strength;
	int stamina;
	int defence;

public:
	Character(string name, int hp, int strength, int stamina, int defence);
	~Character();
	Character();
	string getName();
	int getHp();
	int getStrength();
	int getStamina();
	int getDefence();

	void takeDmg(int dmg) { hp = hp - dmg; }

	//void attack(Opponent opponent);
};