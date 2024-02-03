#pragma once
#include"Enemy.h"

class Monster : public Enemy {
private:
    std::string ability;
public:
    Monster(const std::string& name, int health, int damage, const std::string& ability);
    ~Monster() override;

    void attack() override;
    void displayInfo() override;
};