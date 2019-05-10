#include "extenction.h"
#include "Data.hpp"

namespace lem
{
	bool correct_date(int d, int m)
	{
		bool flag = true;
		switch (m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (d > 31)
			{
				flag = false;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (d > 30)
			{
				flag = false;
			}
			break;
		case 2:
			if (d > 29)
			{
				flag = false;
			}
			break;
		default:
			flag = false;
		}
		return flag;
	}

	date *make_mass(int x)
	{
		date *mass = new date[x];
		for (int i = 0; i < x; ++i)
		{
			while (!correct_date(mass[i].day, mass[i].month))
			{
				mass[i].day = GetRandomValue(1, 31);
				mass[i].month = GetRandomValue(1, 12);
			}
		}
		return mass;
	}

	int same_date(date * ptr, int x, date * outdate)
	{
		int flag = 0;
		for (int i = 0; i < x - 1; ++i)
		{
			for (int j = i + 1; j < x; ++j)
			{
				if (((ptr + i)->day == (ptr + j)->day) && ((ptr + i)->month == (ptr + j)->month))
				{
					//std::cout << std::endl << (ptr + i)->day << (ptr + i)->month << " и " << (ptr + j)->day << (ptr + j)->month<<std::endl;
					outdate->day = (ptr + i)->day;
					outdate->month = (ptr + i)->month;
					++flag;
				}
			}
		}
		return flag;
	}

	bool simulation(int par, int z, date * print)
	{
		bool output = false;
		date * ptr = nullptr;
		{
			ptr = lem::make_mass(z);
			if (lem::same_date(ptr, z, print) > par) { output = true; }
			delete[] ptr;
		}
		return output;
	}

	int answer_checked()
	{
		int x;
	bool mistake = true;
	while (mistake)
	{
		mistake = false;
		std::cin >> x;
		if (std::cin.fail())
		{
			mistake = true;
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Что-то пошло не так, вводите только натуральные числа." << std::endl;
		}
	}
	return x;
}
	float answer_checked_f()
	{
		float x;
		bool mistake = true;
		while (mistake)
		{
			mistake = false;
			std::cin >> x;
			if (std::cin.fail())
			{
				mistake = true;
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Что-то пошло не так, вводите только натуральные числа." << std::endl;
			}
		}
		return x;
	}
}