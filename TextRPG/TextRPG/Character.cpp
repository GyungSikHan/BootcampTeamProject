#include "Character.h"

#include <iostream>

Character* Character::instance = nullptr;

Character* Character::getInstance(string _name)
{
	if (!instance)
	{
		instance = new Character(_name);
	}
	else if (_name != instance->name)
	{
		cout << "�������� �ʴ� ĳ�����Դϴ�." << endl;
	}
	
	return instance;
}

Character::Character(string _name) : name(_name)
{
	cout << "ĳ���� " << this->name << " ���� �Ϸ�! ����: " << level << ", ü��: " << this->health << ", ���ݷ�: " << this->attack << endl;
}

Character::~Character()
{
}

void Character::displayStatus()
{
	cout << this->name << "�� ����â�� Ȯ���մϴ�." << endl
		<< "-----" << endl
		<< "����: " << this->level << endl
		<< "ü��: " << this->health << "/" << this->maxHealth << endl
		<< "���ݷ�: " << this->attack << endl
		<< "����ġ: " << this->experience << endl
		<< "���: " << this->gold << endl
		<< "�κ��丮: " << endl;
	
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << "  " << i + 1 << ". " << inventory[i]->getName() << endl;
	}

	cout << "-----" << endl;
}

void Character::levelUp()
{
	if (experience < 100)
	{
		cout << "����ġ�� �����Ͽ� �������� �� �����ϴ�." << endl;
	}

	if (this->level >= 10)
	{
		cout << "�ְ� ������ �����Ͽ� �������� �� �����ϴ�." << endl;
	}

	this->level += 1;
	this->experience -= 100;
	this->maxHealth += 20 * (this->level);
	this->attack += 5 * (this->level);
	this->health = this->maxHealth;
}

void Character::useItem(int _index)
{
	inventory[_index]->use();

	inventory.erase(inventory.begin() + _index);
}

void Character::visitShop()
{
	/*TODO*/
}
