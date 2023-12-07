#pragma once
#include<string>

using namespace std;

class Enemy {
	string name;
	int health;
	int damage;
public:
	Enemy(string _name, int hp, int dmg) : name(_name), health(hp), damage(dmg) {
		if (health <= 0 || damage < 0) {
			throw invalid_argument("Krivi unos podataka!");
		}
	}
	virtual void Attack();
	virtual void DisplayInfo();
};