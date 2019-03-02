#include <iostream>
#include <limits>
void while_part()
{
	/*int min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
		int number;
		std::cout << "Вводите последовательность чисел через пробел, оканчивающуюся нулём. " << std::endl;
	while (true)
	{
		std::cin >> number;
		if (number == 0) break;
		if (number < min) min = number;
		if (number > max) max = number;
	}
	std::cout << "Минимальное - " <<min<< ", максимальное - "<< max<< std::endl;
	/*====================================================================================================*/
	/*std::cout << "Вводите последовательность чисел через пробел, оканчивающуюся нулём. " << std::endl;
	int max = std::numeric_limits<int>::min();
	int number, count;
	count = 0;
	while (true)
	{
		std::cin >> number;
		if (number == 0) break;
		if (number > max)
		{
			max = number;
			count = 1;
		}
		else if (number == max) ++count;
	}
	std::cout << "Количество повторений максимального числа - " <<count <<std::endl;
	/*====================================================================================================*/
	/*std::cout << "Введите число и получите его зеркальную копию. " << std::endl;
	int number, x;
	std::cin >> number;
	while (true)
	{
	if (number / 10 == 0) break;
	x = number % 10;
	number /= 10;
	std::cout << x;
	}
	std::cout << number;
	/*====================================================================================================*/
	/*std::cout << "Введите число и узнайте, какая минимальная степень двойки больше его. " << std::endl;
	int number;
	std::cin >> number;
	int x=1;
	while (true)
	{
		if (x > number) break;
		x *= 2;
	}
	std::cout << x << std::endl;
	/*====================================================================================================*/
	/*std::cout << "Введите номер числа Фибоначи и узнайте его значение. " << std::endl;
	int number, a, b,x, i;
	i = 2;
	a = 0;
	b = 1;
	x = 0;
	std::cin >> number;
	while (true)
	{
		x = a + b;
		if (i >= number) break;
		a = b;
		b = x;
		++i;
	}
	std::cout <<x << std::endl;
}
/*====================================================================================================*/
int main()
/*Ivan Andreevich, don't forget to remove comment marks before using!
Remember: only one task can be activated at the same time, or you'll recive an error message of type "multiple initializing."*/
{
	setlocale(0, "");
	/*Сектор while*/
	while_part();
	}