#include "Data.hpp"

namespace ext
{

	int mnum(ext::Month x)
	{
		switch (x)
		{
		case ext::Month::January:
			return 1;
			break;
		case ext::Month::February:
			return 2;
			break;
		case ext::Month::March:
			return 3;
			break;
		case ext::Month::April:
			return 4;
			break;
		case ext::Month::May:
			return 5;
			break;
		case ext::Month::June:
			return 6;
			break;
		case ext::Month::July:
			return 7;
			break;
		case ext::Month::August:
			return 8;
			break;
		case ext::Month::September:
			return 9;
			break;
		case ext::Month::October:
			return 10;
			break;
		case ext::Month::November:
			return 11;
			break;
		case ext::Month::December:
			return 12;
			break;
		}
	}

	unsigned int countJND(ext::Date date)
	{
		int a = (14 - mnum(date.month)) / 12;
		int y = date.year + 4800 - a;
		int m = mnum(date.month) + (12 * a) - 3;
		return date.day + ((153 * m + 2) / 5) + 365 * y + (y / 4) - (y / 100) + (y / 400) - 32045;
	}
	int countDistance(Date from, Date to)
	{
	return	countJND(to) - countJND(from);
    }
}