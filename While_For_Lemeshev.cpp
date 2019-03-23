#include <iostream>
#include <limits>
#include <string>
void space(int n, char c)
{
	/*Несмотря на то, что первым циклом мы даём 0, в процедуре алгоритм перд проверкой выполняется хотя бы раз,
	поэтому и вырисовывается один символ, а дальше в соответвии с данными. 
	Подпрограммы - наше всё)*/
	for (int i = 0; i < n; ++i)
	{
		std::cout << c;
	}
}
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
	std::cout <<x << std::endl;*/
}
/*====================================================================================================*/
void for_part()
{
	/*    int x;
		int c;
		c = 0;
		std::cout << "Задание первое, введите число от 1 до 27 и узнайте, сумма цифр скольких" << std::endl << "трёхзначных чисел ему равна." << std::endl;
		std::cin >> x;
		for (int i = 100; i <= 999; ++i)
		{
			if ((i / 100) + (i % 100 / 10) + (i % 10) == x) { c++; };//c++, he-he)
		}
	   std::cout << c << std::endl;
/*====================================================================================================*/
/*std::string line;
std::cout << "Задание второе, введите строку и получите её же в рамке." << std::endl;
std::getline(std::cin, line);
int size = line.size()+1;
std::cout << "+";
for (int i = 0; i <= size; i++)
{
	std::cout << "-";
}
std::cout << "+"<<std::endl<<"| "<< line<<" |"<<std::endl<<"+";
for (int i = 0; i <= size; i++)
{
	std::cout << "-";
}
std::cout << "+";
/*====================================================================================================*/
/*int x;
std::cout << "Задание третье, введите число и получите шахматную доску с данной стороной." << std::endl;
std::cin >> x;
for (int i = 1; i <= x; ++i)
{
	for (int e = 1; e <= x; ++e)
	{
		e += i % 2;//Проверка чётности-нечётности выводимой строки.
		if (e % 2 == 0)
		{
			std::cout << "#";
		}
		else
		{
			std::cout << "*";
		}
		e -= i % 2;//Возврат у исходнику для поддержания заданой структуры
	}
	std::cout << std::endl;
}
std::cin >> x;
/*====================================================================================================*/
	/*int x;
	std::cout << "Задание четвёртое, введите число и получите шахматную ромб с данной стороной." << std::endl;
	std::cin >> x;
	for (int i = 0; i < x-1; ++i)
	{
		space(x - i, ' ');
		space(1+(i * 2), 'X');
		space(x - i, ' ');
		std::cout << std::endl;
	}
	for (int i = x-1; i >= 0; --i)
	{
		space(x-i, ' ');
		space(1+(i * 2), 'X');
		space(x-i, ' ');
		std::cout << std::endl;
	}
	std::cout << "Если насмотрелись, введите ноль, чтобы выйти из программы." << std::endl;
	std::cin >> x;
	/*====================================================================================================*/
}
int main()
/*Ivan Andreevich, don't forget to remove comment marks before using!
Remember: only one task can be activated at the same time, or you'll recive an error message of type "multiple initializing."*/
    {
	setlocale(0, "");
	/*Сектор while*/
	while_part();
	/*Сектор For*/
	for_part();
	}