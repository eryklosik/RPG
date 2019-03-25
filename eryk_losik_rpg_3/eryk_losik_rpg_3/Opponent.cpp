#include "pch.h"
#include "Opponent.h"
#include "Character.h"
using namespace std;

Opponent::Opponent(string name, int hp, int strength, int stamina, int defence, int inventorySize)
	: Character(name, hp, strength, stamina, defence)
{
	//items = new int[inventorySize];

}


Opponent::Opponent()
{
	battlecry = "";
}


Opponent::~Opponent()
{

}

string Opponent::getBattlecry()
{
	return battlecry;
}
