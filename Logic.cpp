#include <iostream>
#include <cmath>
/*using namespace std для слабаков.*/
int main() {
	setlocale(0, "")
    /*=============================================================================================================*/;
	int a, b, c;
	std::cout << "Задание первое, введите у стороны и узнайте, можно ли его построить из них." << std::endl;
	std::cin >> a >> b>>c;

	if (a + b < c || a + c <b || b+c <a )
	{
		std::cout << "Нет." << std::endl;
	}
	else
	{
		std::cout << "Да." << std::endl;
	}
	/*=============================================================================================================*/
		int number;
	std::cout << "Задание второе, введите число рублей и узнайте, как его правильно склонять." << std::endl;
	std::cin >> number;
	if (number % 100 / 10 != 1)
	{
		number = number % 10;
		switch (number)
		{
		case 1:
			std::cout << "Рубль." << std::endl;
			break;
		case 2:
		case 3:
		case 4:
			std::cout << "Рубля." << std::endl;
			break;
		default:
			std::cout << "Рублей." << std::endl;
			break;
		}
	}
	else
	{
		std::cout << "Рублей." << std::endl;
	}
	/*=============================================================================================================*/
		bool enemyInFront, isBoss;
	int robotHealth;
	std::cout << "Задание третье, введите значения и узнайте, будет ли робот стрелять." << std::endl;
	std::cin >> enemyInFront>> isBoss>> robotHealth;
	if ((enemyInFront == true && isBoss == true && robotHealth >= 50) || enemyInFront == true && isBoss == false)
	{
		std::cout << "Fire." << std::endl;
	}
	/*=============================================================================================================*/
	/*Используются a,b,c из первого задания*/
	std::cout << "Задание четвёртое, введите оценки и узнайте общую." << std::endl;
	std::cin >> a>> b>> c;
	if (a == b || a == c)
	{
		std::cout << a << std::endl;
	}
	else if (b == a || b == c)
	{
		std::cout << b << std::endl;
	}
	else if (c == a || c == b)
	{
		std::cout << c << std::endl;
	}
	else
	{
		if ((a>b && a<c) || (a<b && a>c))
		{
				std::cout << a << std::endl;
		}
		else if ((b>a && b<c)||(b<a && b>c))
		{
			std::cout << b << std::endl;
		}
		else if ((c>b &&c<a)|| (c<b && c>a))
		{
			std::cout << c << std::endl;
		}
	}
	/*=============================================================================================================*/
	int d, m, y;
	bool flag = true;
	std::cout << "Задание пятое, введите дату и узнайте, реальна ли она." << std::endl;
	std::cin >> d >> m >> y;
	/*if ((y % 400 == 0) || (y % 100 !=0 && y % 4 == 0))
	{
	} условие высокосности года (для февраля)*/
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
		if ((y % 400 == 0) || (y % 100 !=0 && y % 4 == 0))//условие высокосности года (для февраля)
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
	default: //несуществующий месяц
		flag = false;
	}
	if (flag)
	{
		std::cout << "True." << std::endl;
	}
	else
	{
		std::cout << "False." << std::endl;
	}
	/*=============================================================================================================*/
	std::cout << "Задание шестое, введите координаты и узнайте, смодет ли туду попасть фрезь." << std::endl;
	int a, b, x, y, x1, y1;
	std::cin >> a >> b;
	x = a / 10;
	y = a % 10;
	x1 = b / 10;
	y1 = b % 10;
	if (x == x1 || y == y1 || (abs(x - x1) == abs(y - y1)))
	{
		std::cout << "True." << std::endl;
	}
	else
	{
		std::cout << "False." << std::endl;
	}
}