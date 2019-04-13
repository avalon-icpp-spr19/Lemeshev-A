#include <iostream>
#include <iomanip>
#include <cmath>
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

void task1()
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
void task2()
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
void task3()
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
int main()
{
	setlocale(0, "");
	task3();
	return 0;
}