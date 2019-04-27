#include <iostream>
#include <iomanip>
#include <cmath>
#include "extenction.h"
const char color[7][16]{ "красный", "оранжевый", "жёлтый", "зелёный","голубой" , "синий", "фиолетовый"};
struct point
{
	float x;
	float y;
};
struct circle
{
	int radius;
	point coor;
};
enum Color
{
	red = 0,
	orange,
	yellow,
	green,
	lazur,
	blue,
	violet,
};
struct Triangle
{
	int a;
	int b;
	int c;
	Color color;
};
struct date
{
	int day;
	int month;
	int year;
};
Color translate(int x)
{
	switch (x)
	{
	case 0:
		return Color::red;
		break;
	case 1:
		return Color::orange;
	break;
	case 2:
		return Color::yellow;
		break;
	case 3:
		return Color::green;
		break;
	case 4:
		return Color::lazur;
		break;
	case 5:
		return Color::blue;
		break;
	case 6:
		return Color::violet;
		break;
	}
}
int code(Color x)
{
	switch (x)
	{
	case Color::red:
		return 0;
		break;
	case Color::orange:
		return 1;
		break;
	case Color::yellow:
		return 2;
		break;
	case Color::green:
		return 3;
		break;
	case Color::lazur:
		return 4;
		break;
	case Color::blue:
		return 5;
		break;
	case Color::violet:
		return 6;
		break;
	}
}
void trcolor(Color x)
{
	switch (x)
	{
	case Color::red:
		std::cout << "красный";
		break;
	case Color::orange:
		std::cout << "оранжевый";
		break;
	case Color::yellow:
		std::cout << "жёлтый";
		break;
	case Color::green:
		std::cout << "зелёный";
		break;
	case Color::lazur:
		std::cout << "голубой";
		break;
	case Color::blue:
		std::cout << "синий";
		break;
	case Color::violet:
		std::cout << "фиолетовый";
		break;
	}
}

/*==========================================================================================*/
/*void task1()
{
	point coordinate;
	float radius;
	std::cout << "Введите радиус окружности." << std::endl;
	std::cin >> radius;
	std::cout << "Введите через пробел абциссу и ординату точки." << std::endl;
	std::cin >> coordinate.x >> coordinate.y;
	if (coordinate.x*coordinate.x + coordinate.y*coordinate.y <= radius*radius)
	{
		std::cout << "Точка лежит внутри окружности." << std::endl;
	}
	else
	{
		std::cout << "Точка не лежит внутри окружности." << std::endl;
	}
	point dot1, dot2, half;
	std::cout << "Введите через пробел абциссу и ординату первой точки." << std::endl;
	std::cin >> dot1.x >> dot1.y;
	std::cout << "Введите через пробел абциссу и ординату второй точки." << std::endl;
	std::cin >> dot2.x >> dot2.y;
	half.x = (dot1.x + dot2.x) / 2.0F;
	half.y = (dot1.x + dot2.x) / 2.0F;
	std::cout << "Координаты середины отрезка: " << half.x << ';' << half.y << std::endl;
}
/*==========================================================================================*/
/*void task2()
{
	circle krug1, krug2;
	std::cout << "Введите через пробел радиус, абциссу и ординату центра первой окружности." << std::endl;
	std::cin >> krug1.radius >>krug1.coor.x >> krug1.coor.x;
	std::cout << "Введите через пробел радиус, абциссу и ординату центра второй окружности." << std::endl;
	std::cin >> krug2.radius >> krug2.coor.x >> krug2.coor.x;
	if (sqrt(pow(krug1.coor.x - krug2.coor.x, 2) + pow(krug1.coor.y - krug2.coor.y, 2)) < krug1.radius + krug2.radius)
	{
		std::cout << "Окружности пересекаются."<<std::endl;
	}
	else
	{
		std::cout << "Окружности не пересекаются." << std::endl;
	}
}
/*==========================================================================================*/
/*void task3()
{
	Triangle t{3, 4, 5, Color::green};
	std::cout << "Стороны треугольника равны "<< t.a<< ", "<<t.b << " и "<< t.c<<", а цвет у него ";
	switch (t.color)
	{
	case Color::red:
		std::cout << "красный";
		break;
	case Color::orange:
		std::cout << "оранжевый";
	break;
	case Color::yellow:
		std::cout << "жёлтый";
		break;
	case Color::green:
		std::cout << "зелёный";
		break;
	case Color::lazur:
		std::cout << "голубой";
		break;
	case Color::blue:
		std::cout << "синий";
		break;
	case Color::violet:
		std::cout << "фиолетовый";
		break;
	default:
		std::cout << "Неопознанный";
		break;
	}
}
/*==========================================================================================*/
/*void task4()
{
	int minx=100, index;//max randome value
	unsigned int range, minrange=0B11111111111111111111111111111111;//<limits> for noobs
	point mass[20];
	for(int i = 0; i<20;++i)
	{
		mass[i].x = ext::GetRandomValue(0, 100);
		mass[i].y = ext::GetRandomValue(0, 100);
		if (mass[i].x < minx) { index = i; }
	}
	for (int i = 0; i < 19; ++i)
	{
		range =pow((mass[i].x - mass[i + 1].x), 2) + pow((mass[i].y - mass[i + 1].y), 2);
		if (range < minrange) { minrange = range; }
	}
	std::cout << "Точка с минимальной абциссой - "<< mass[index].x<< ':' << mass[index].y<<std::endl;
	std::cout << "Минимальное расстояние между двумя точками - " << sqrt(minrange) << std::endl;
}
/*==========================================================================================*/
void task5()
{
	Triangle mass[100];
	int par;
	int colorcount[7]{};
	std::cout<< "Введите порог периметра треугольника."<<std::endl;
	std::cin >> par;
	for (int i = 0; i < 100; ++i)
	{
		mass[i].a = ext::GetRandomValue(1, 10);
		mass[i].b = ext::GetRandomValue(1, 10);
		mass[i].c = ext::GetRandomValue(1, 10);
		mass[i].color = translate(ext::GetRandomValue(0, 6));
		++colorcount[code(mass[i].color)];
		while ((mass[i].a + mass[i].b < mass[i].c) || (mass[i].a + mass[i].c < mass[i].b) || (mass[i].b + mass[i].c < mass[i].a))
		{
			mass[i].a = ext::GetRandomValue(1, 10);
			mass[i].b = ext::GetRandomValue(1, 10);
			mass[i].c = ext::GetRandomValue(1, 10);
		}
		if (mass[i].a + mass[i].b + mass[i].c > par)
		{
			std::cout << "Есть треугольник с искомым периметром: "<< mass[i].a<< ':' << mass[i].b <<':' << mass[i].c << ", цвет ";
			trcolor(mass[i].color);
			std::cout << std::endl;
		}		
	}
	std::cout << "По цветам: " << std::endl;
	for (int i = 0; i < 7; ++i)
	{
		trcolor(translate(i));
		std::cout << ": " << colorcount[i] << std::endl;
	}
}
/*==========================================================================================*/
/*void task6()
{
	date dat;
	std::cout<<"Введите дату и узнайте, корректна ли она."<<std::endl;
	std::cin>>dat.day>>dat.month>>dat.year;
	bool flag = true;
	switch (dat.month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:

		if (dat.day > 31)
		{
			flag = false;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:

		if (dat.day > 30)
		{
			flag = false;
		}
		break;
	case 2:

		if ((dat.year % 400 == 0) || (dat.year % 100 !=0 && dat.year % 4 == 0))
		{
			if (dat.day > 29)
			{
				flag = false;
			}
		}
		else
		{
			if (dat.day > 28)
			{
				flag = false;
			}
		}
		break;
	default:
		flag = false;
	}
	if(flag)
	{
		std::cout<<"Корректна.";
	}
	else
	{
		std::cout<<"Некорректна.";
	}

}
/*==========================================================================================*/
int main()
{
	setlocale(0, "");
	task5();
	return 0;
}