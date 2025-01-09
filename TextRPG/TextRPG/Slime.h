#pragma once
#incluide "Monster.h"
#include<iostream>
#include<string>

class Slime : public Monster {
private:
    string name;
    int health = 0;
    int attack = 0;
public:
    Slime(int level) {
        this->health = level * 24;
        this->attack = level * 5;
        this->name = "������";
    }
    string getName() { return name; }
    int getHealth() { return health; }
    int getAttack() { return attack; }
    void takeDamage(int damage) { this->health -= damage; }
    Item* dropItem();
};