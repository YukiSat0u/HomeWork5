#pragma once

#include "SnackSlot.h"
#include <iostream>
#include <string>

using namespace std;

class VendingMachine
{
public:
	VendingMachine(int slotCount);
	~VendingMachine();

	int getSize() const;
	int getEmptySlotsCount() const;
	int getSnacksCount() const;

	void addSlot(SnackSlot* slot);
	void giveSnack();
private:
	int Size;
	int SnackCount;
	int AllSlots;
	int FreeSlots;
	SnackSlot** slots;
};