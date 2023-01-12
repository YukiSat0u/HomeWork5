#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"

int main()
{
	setlocale(LC_ALL, "");

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	Snack* mars = new Snack("Mars");
	SnackSlot* slot = new SnackSlot(10);
	VendingMachine* machine = new VendingMachine(4);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	slot->addSnack(mars);
	slot->addSnack(snickers);
	machine->addSlot(slot); // �������� ���� ������� � �������

	cout << "���������� ������ ������ ��� ������: " << machine->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������
	cout << "���������� ������ � ��������: " << machine->getSnacksCount() << endl;

	machine->giveSnack();

	cout << "���������� ������ ������ ��� ������: " << machine->getEmptySlotsCount() << endl;
	cout << "���������� ������ � ��������: " << machine->getSnacksCount() << endl;

	machine->giveSnack();

	cout << "���������� ������ ������ ��� ������: " << machine->getEmptySlotsCount() << endl;
	cout << "���������� ������ � ��������: " << machine->getSnacksCount() << endl;

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	delete mars;

	return 0;

}