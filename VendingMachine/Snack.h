#pragma once

#include <iostream>

using namespace std;

class Snack
{
public:
	Snack(const std::string& name);
	Snack(const std::string& name, int cost);
	Snack(std::string& name, int cost, int calories);
	~Snack() = default;

	std::string getNameSnack() const;
	void setNameSnack(std::string& name);

	short getCostSnack() const;
	void setCostSnack(short value);

	int getCaloriesSnack() const;
	void setCaloriesSnack(int value);

private:
	std::string NameSnack;
	int CostSnack;
	int CaloriesSnack;
};