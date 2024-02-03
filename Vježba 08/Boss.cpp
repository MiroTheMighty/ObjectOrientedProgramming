#include "boss.h"

Boss::Boss(const std::string& name, int health, int damage, const std::string& weapon) : Enemy(name, health, damage) {
    if (weapon.empty()) {
        throw std::invalid_argument("Weapon cannot be empty.");
    }
    this->weapon = weapon;
}

Boss::~Boss() {}

void Boss::attack() {
    std::cout << "Boss attacks with " << weapon << " and deals " << damage << " damage." << std::endl;
}

void Boss::displayInfo() {
    std::cout << "Boss - Name: " << name << ", Health: " << health << ", Damage: " << damage << ", Weapon: " << weapon << std::endl;
}
