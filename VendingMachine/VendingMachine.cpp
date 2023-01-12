#include "VendingMachine.h"

VendingMachine::VendingMachine(int size)
{
	Size = size;
	AllSlots = 0;
	FreeSlots = Size;
	SnackCount = 0;
	slots = new SnackSlot * [size];

}

VendingMachine::~VendingMachine()
{
	delete[] slots;
}

int VendingMachine::getSize() const
{
	return Size;
}

int VendingMachine::getEmptySlotsCount() const
{
	return FreeSlots;
}

int VendingMachine::getSnacksCount() const
{
	return SnackCount;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	slots[AllSlots] = slot;
	for (Size; Size != 0; Size--)
		--FreeSlots;
	++AllSlots;
	SnackCount += slot->getSnackCount();
}

void VendingMachine::giveSnack()
{
	--SnackCount;
	slots[AllSlots - 1]->giveSnack();
	++FreeSlots;

}