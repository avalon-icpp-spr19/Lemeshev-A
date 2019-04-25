#include "Data.hpp"
#include <iostream>
namespace ext
{
	void Monthname(Month x)
	{
		switch (x)
		{
		case ext::Month::January:
			std::cout << " €нвар€ ";
			break;
		case ext::Month::February:
			std::cout << " феврал€ ";
			break;
		case ext::Month::March:
			std::cout << " марта ";
			break;
		case ext::Month::April:
			std::cout << " апрел€ ";
			break;
		case ext::Month::May:
			std::cout << " ма€ ";
			break;
		case ext::Month::June:
			std::cout << " июл€ ";
			break;
		case ext::Month::July:
			std::cout << " июн€ ";
			break;
		case ext::Month::August:
			std::cout << " августа ";
			break;
		case ext::Month::September:
			std::cout << " сент€бр€ ";
			break;
		case ext::Month::October:
			std::cout << " окт€бр€ ";
			break;
		case ext::Month::November:
			std::cout << " но€бр€ ";
			break;
		case ext::Month::December:
			std::cout << " декабр€ ";
			break;
		}
	}
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
	Month MonthCode(int x)
	{
		switch (x)
		{
		case 1:
			return ext::Month::January;
			break;
		case 2:
			return ext::Month::February;
			break;
		case 3:
			return ext::Month::March;
			break;
		case 4:
			return ext::Month::April;
			break;
		case 5:
			return ext::Month::May;
			break;
		case 6:
			return ext::Month::June;
			break;
		case 7:
			return ext::Month::July;
			break;
		case 8:
			return ext::Month::August;
			break;
		case 9:
			return ext::Month::September;
			break;
		case 10:
			return ext::Month::October;
			break;
		case 11:
			return ext::Month::November;
			break;
		case 12:
			return ext::Month::December;
			break;
		}
	}
	bool IsDateReal(int d, int m, int y)// I stole this code from the "logic" lesson's homework)
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
			//по 31 дню
			if (d > 31)
			{
				flag = false;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			//по 30 дней
			if (d > 30)
			{
				flag = false;
			}
			break;
		case 2:
			//вообще зашквар с годами
			if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0))//условие высокосности года (дл€ феврал€)
			{
				if (d > 29)
				{
					flag = false;
				}
			}
			else
			{
				if (d > 28)
				{
					flag = false;
				}
			}
			break;
		default: //несуществующий мес€ц
			flag = false;
		}
		if (flag) { return true; }
		else { return false; }

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
	void print(Date data, DateFormat format)
	{
		std::cout << data.day;
		if (format == DateFormat::MonthAsString) {  Monthname(data.month); }
		else { std::cout << '.' << data.month / 10 << data.month % 10 << '.'; }
		std::cout << data.year;
	}
	Season getSeason(Date date)
	{
		switch (date.month)
		{	
		case ext::Month::March:
		case ext::Month::April:
		case ext::Month::May:
			return ext::Season::Spring;
			break;
		case ext::Month::June:
		case ext::Month::July:
		case ext::Month::August:
			return ext::Season::Summer;
			break;
		case ext::Month::September:
		case ext::Month::October:
		case ext::Month::November:
			return ext::Season::Autumn;
			break;
		case ext::Month::December:
		case ext::Month::January:
		case ext::Month::February:
			return ext::Season::Winter;
			break;
		}
	}
	void swap(Date * lhs, Date * rhs)
	{
		Date x;
		x = *lhs;
		*lhs = *rhs;
		*rhs = x;
	}
	bool isSame(Date* lhs, Date * rhs)
	{
		if ((rhs->day == lhs->day) && (rhs->month == lhs->month) && (rhs->year == lhs->year)) { return true; }
		else { return false; }
	}
	Date * max(Date * lhs, Date * rsh)
	{
		if (countJND(*lhs) < countJND(*rsh)) {return rsh;}
		else { return lhs; }
	}
	Date * min(Date * lhs, Date * rsh)
	{
		if (countJND(*lhs) > countJND(*rsh)) { return rsh; }
		else { return lhs; }
	}
	Date * getMinDate(Date dates[], int size)
	{
		Date *minDate = &dates[size + 1];
		Date *check = &dates[0];
		*minDate={31, ext::Month::December, 0XFFFFFFFF};
		for (int i = 0; i < size; ++i)
		{
			minDate = min(minDate, check+i);
			return minDate;
	    }
	}
	Date * getMaxDate(Date dates[], int size)
	{
		Date *minDate = &dates[size + 1];
		Date *check = &dates[0];
		*minDate = { 31, ext::Month::December, 0XFFFFFFFF };
		for (int i = 0; i < size; ++i)
		{
			minDate = min(minDate, check + i);
			return minDate;
		}
	}
		bool tryFillDate(Date * date, int year, int month, int day)
		{
			if (IsDateReal)
			{
				date->day = day;
				date->month = MonthCode(month);
				date->year = year;
				return true;
			}
			else { return false; }
		}
