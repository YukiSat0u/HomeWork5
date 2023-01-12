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
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	slot->addSnack(mars);
	slot->addSnack(snickers);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	cout << "Количество пустых слотов для снеков: " << machine->getEmptySlotsCount() << endl; // Должно выводить количество пустых слотов для снеков
	cout << "Количество снеков в автомате: " << machine->getSnacksCount() << endl;

	machine->giveSnack();

	cout << "Количество пустых слотов для снеков: " << machine->getEmptySlotsCount() << endl;
	cout << "Количество снеков в автомате: " << machine->getSnacksCount() << endl;

	machine->giveSnack();

	cout << "Количество пустых слотов для снеков: " << machine->getEmptySlotsCount() << endl;
	cout << "Количество снеков в автомате: " << machine->getSnacksCount() << endl;

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	delete mars;

	return 0;

}