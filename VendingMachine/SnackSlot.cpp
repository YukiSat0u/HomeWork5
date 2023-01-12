#include "SnackSlot.h"
#include <string>

SnackSlot::SnackSlot(short amt)
{
	Amt = amt;
	SnackCount = 0;
	Snacks = new Snack * [Amt];
}

SnackSlot::~SnackSlot()
{
	delete[] Snacks;
}

short SnackSlot::getAmt() const
{
	return Amt;
}

short SnackSlot::getSnackCount() const
{
	return SnackCount;
}

void SnackSlot::addSnack(Snack* snack)
{
	if (SnackCount < Amt)
	{
		Snacks[SnackCount] = snack;
		++SnackCount;
		cout << snack->getNameSnack() << " добавлен в слот" << endl;
	}
}

void SnackSlot::giveSnack()
{
	if (SnackCount > 0)
	{
		--SnackCount;
		cout << Snacks[SnackCount]->getNameSnack() << " выдан" << endl;
	}
}