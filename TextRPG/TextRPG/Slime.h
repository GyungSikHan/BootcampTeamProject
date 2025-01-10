﻿#pragma once
#include "Monster.h"
#include<iostream>
#include<string>

using namespace std;
class Slime : public Monster {
private:
    string name;
    int health = 0;
    int attack = 0;
public:
    Slime(int level/*캐릭터 레벨*/) {
        int RandomHelathBoost = rand() % 10 + 15;
        int RandomDamageBoost = rand() % 5 + 2;
        this->health = level * RandomHelathBoost;
        this->attack = level * RandomDamageBoost;
        this->name = "슬라임";
    }
    string getName() { return name; }
    int getHealth() { return health; }
    int getAttack() { return attack; }
    void takeDamage(int damage) { this->health -= damage; }
    Item* dropItem(/*아이템 관련 매개변수*/) {
        /*아이템 종류에 따른 함수*/
    }
};