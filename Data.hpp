#pragma once
#include <iostream>
#include <fstream>
struct date
{
	unsigned int day;
	unsigned int month;
};

namespace lem
{
	bool correct_date(int d, int m);

	date *make_mass(int x);

	int same_date(date * ptr, int x, date * out);

	int answer_checked();
	
	bool simulation(int par, int z, date * print);

	float answer_checked_f();
}