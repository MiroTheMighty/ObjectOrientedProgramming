#pragma once
#include<iostream>
#include<stdexcept>

class Enemy {
protected:
    std::string name;
    int health;
    int damage;
public:
    Enemy(const std::string& name, int health, int damage);
    virtual ~Enemy();

    virtual void attack() = 0;
    virtual void displayInfo() = 0;
};