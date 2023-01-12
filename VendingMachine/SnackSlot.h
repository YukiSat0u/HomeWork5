#pragma once
#include "Snack.h"
#include <iostream>
#include <string>

using namespace std;

class SnackSlot
{
public:
	SnackSlot(short amt);
	~SnackSlot();

	short getAmt() const;
	short getSnackCount() const;

	void giveSnack();
	void addSnack(Snack* snack);

private:
	short Amt;
	short SnackCount;
	Snack** Snacks;
};