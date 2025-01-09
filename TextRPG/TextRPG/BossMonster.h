#pragma once
#incluide "Monster.h"
#include<iostream>
#include<string>

class BossMonster : public Monster {
private:
    string name;
    int health = 0;
    int attack = 0;
public:
    BossMonster(int level) {
        this->health = level * 45;
        this->attack = level * 15;
        this->name = "Dragon";
    }
    string getName() { return name; }
    int getHealth() { return health; }
    int getAttack() { return attack; }
    void takeDamage(int damage) { this->health -= damage; }
    Item* dropItem();
};