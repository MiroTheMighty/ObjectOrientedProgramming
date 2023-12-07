#pragma once
#include"Enemy.h"

class Monster : Enemy {
	string ime;
	int hp;
	int dmg;
	string sposobnost;
public:
	Monster(string spo) : Enemy(ime, hp, dmg), sposobnost(spo) {
		if (spo == "") {
			throw invalid_argument("Sposobnost je prazna!");
		}
	}
	void Attack();
	void DisplayInfo();
};