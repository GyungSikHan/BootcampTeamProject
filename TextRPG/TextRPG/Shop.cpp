#include "Shop.h"
#include <iostream>
#include "Item.h"
using namespace std;

void Shop::displayItems()
{
	cout << "������ ���� ���� ȯ���մϴ�!" <<endl;
	cout << "���� ������ ������ :" <<endl;
	for (auto& item : avaliableItems)
	{
		cout << item->getItemIdx() << ". " << item->getName() << " : " << item->getPrice() << " ���" << endl;
	}
}

void Shop::buyItem(int index/*, Character* player*/)
{
	// TODO: �÷��̾� ��� ����
	//player->gold -= avaliableItems[index].getPrice();
	// TODO: �÷��̾� �κ��丮�� ������ �߰�
	//player->inventory.push_back(avaliableItems[index]);
	cout << avaliableItems[index]->getName() << "�� �����߽��ϴ�!"<< endl;
}

void Shop::sellItem(int index/*, Character* player*/)
{
	// TODO: �÷��̾� ��� ����
	//player->gold += avaliableItems[index].getPrice();
	// �÷��̾� �κ��丮�� ������ ����
	// Item* removeItem = nullptr;
	// for(auto& item : player->inventory)
	// {
	//		if(item.getItemIdx == index) {
	//			cout << removeItem->getName() << "�� �Ǹ��߽��ϴ�!" << endl;
	//			TODO: �÷��̾� �κ��丮����(vector) ������ ����
	//		}
	// }
	//
}
