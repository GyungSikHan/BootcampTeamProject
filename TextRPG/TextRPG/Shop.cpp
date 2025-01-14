#include "Shop.h"
#include <iostream>
#include "Item.h"
#include "Character.h"
using namespace std;

void Shop::displayItems()
{
	cout << "������ ���� ���� ȯ���մϴ�!" <<endl;
	cout << "���� �� �Ǹ� ������ ������ :" <<endl;
	for (auto& item : avaliableItems)
	{
		int minusPrice = item->getPrice() * sellPriceRatio;
		int sellPrice = item->getPrice() - minusPrice;
		cout << item->getItemIdx() << ". " << item->getName() << " / ���� : " << item->getPrice() << " ���" <<" / �ǸŰ� : " << sellPrice << endl;
	}
}

void Shop::buyItem(int index, Character* player)
{
	player->addGold(-(avaliableItems[index]->getPrice()));
	player->pushItem(avaliableItems[index]);
	cout << avaliableItems[index]->getName() << "�� �����߽��ϴ�!"<< endl;
}

void Shop::sellItem(int index, Character* player)
{
	for (auto& item : avaliableItems)
	{
		if (item->getItemIdx() == index) {
			int minusPrice = item->getPrice() * sellPriceRatio;
			int sellPrice = item->getPrice() - minusPrice;
			player->addGold(sellPrice);
			cout << item->getName() << "�� �Ǹ��߽��ϴ�! / ���� ��� : " << player->getGold() << endl;
			player->popItemByType(index); 
			break;
		}
	}
}
