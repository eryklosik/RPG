#include "pch.h"
#include <iostream>
#include "Game.h"
#include <stdlib.h>
#include <ctime>
using namespace std;

void batlle(Player& p1, Opponent& o1) {
	while (p1.getHp() > 0 && o1.getHp() > 0) {


		int def = rand() % 5;
		if (def < 3) {
			o1.takeDmg(p1.getStrength());
		}
		else {
			p1.takeDmg(o1.getStrength());
		}

		cout << "actual.hp: " << p1.getHp() << endl;
		cout << "act.op.hp: " << o1.getHp() << endl;
	}
	if (p1.getHp() > 0) {
		cout << "you won the bitka!" << endl;
	}
	else {
		cout << "you lost the bitka!" << endl;
	}
}

int main() {

	srand(time(NULL));

	Game & game = Game::getInstance();
	//Game & game2 = Game::getInstance(); //sprawdzanie poprawnosci singletona

	Player player = game.createPlayer();
	
	cout << "hp: " << player.getHp() << endl;
	cout << "strength: " << player.getStrength() << endl;
	cout << "stamina: " << player.getStamina() << endl;
	cout << "defence: " << player.getDefence() << endl << endl;

	Opponent opponent = game.createOpponent();

	cout << "op.hp: " << opponent.getHp() << endl;
	cout << "op.strength: " << opponent.getStrength() << endl;
	cout << "op.stamina: " << opponent.getStamina() << endl;
	cout << "op.defence: " << opponent.getDefence() << endl;

	batlle(player, opponent);

	return 0;
}