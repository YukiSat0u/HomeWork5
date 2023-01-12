#include "Snack.h"

Snack::Snack(const std::string& name)
{
	NameSnack = name;
	CostSnack = 0;
	CaloriesSnack = 0;
}

Snack::Snack(const std::string& name, int cost)
{
	NameSnack = name;
	CostSnack = cost;
	CaloriesSnack = 0;
}

Snack::Snack(string& name, int cost, int calories)
{
	NameSnack = name;
	CostSnack = cost;
	CaloriesSnack = calories;
}

string Snack::getNameSnack() const
{
	return NameSnack;
}
void Snack::setNameSnack(string& name)
{
	NameSnack = name;
}

short Snack::getCostSnack() const
{
	return CostSnack;
}
void Snack::setCostSnack(short value)
{
	CostSnack = value;
}

int Snack::getCaloriesSnack() const
{
	return CaloriesSnack;
}
void Snack::setCaloriesSnack(int value)
{
	CaloriesSnack = value;
}