#include "pch.h"
#include "Player.h"
#include "Character.h"
using namespace std;

Player::Player(string name, int hp, int strength, int stamina, int defence, int inventorySize)
	: Character(name, hp, strength, stamina, defence)
{
	items = new int[inventorySize];

}

Player::~Player()
{
	delete items;
}
void Player::attack(Opponent opponent) {

}
