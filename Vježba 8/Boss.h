#pragma once
#include"Enemy.h"

class Boss : Enemy {
	string ime;
	int hp;
	int dmg;
	string oruzje;
public:
	Boss(string orz) : Enemy(ime, hp, dmg), oruzje(orz){
		if (orz == "") {
			throw invalid_argument("Oruzje je prazno!");
		}
	}
	void Attack();
	void DisplayInfo();
};