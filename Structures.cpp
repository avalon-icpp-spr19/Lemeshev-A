#include <iostream>
#include <iomanip>
#include <cmath>
const char color[7][16]{ "�������", "���������", "�����", "������","�������" , "�����", "����������"};
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
	std::cout << "������� ������ ����������." << std::endl;
	std::cin >> radius;
	std::cout << "������� ����� ������ ������� � �������� �����." << std::endl;
	std::cin >> coordinate.x >> coordinate.y;
	if (coordinate.x*coordinate.x + coordinate.y*coordinate.y <= radius*radius)
	{
		std::cout << "����� ����� ������ ����������." << std::endl;
	}
	else
	{
		std::cout << "����� �� ����� ������ ����������." << std::endl;
	}
	point dot1, dot2, half;
	std::cout << "������� ����� ������ ������� � �������� ������ �����." << std::endl;
	std::cin >> dot1.x >> dot1.y;
	std::cout << "������� ����� ������ ������� � �������� ������ �����." << std::endl;
	std::cin >> dot2.x >> dot2.y;
	half.x = (dot1.x + dot2.x) / 2.0F;
	half.y = (dot1.x + dot2.x) / 2.0F;
	std::cout << "���������� �������� �������: " << half.x << ';' << half.y << std::endl;
}
void task2()
{
	circle krug1, krug2;
	std::cout << "������� ����� ������ ������, ������� � �������� ������ ������ ����������." << std::endl;
	std::cin >> krug1.radius >>krug1.coor.x >> krug1.coor.x;
	std::cout << "������� ����� ������ ������, ������� � �������� ������ ������ ����������." << std::endl;
	std::cin >> krug2.radius >> krug2.coor.x >> krug2.coor.x;
	if (sqrt(pow(krug1.coor.x - krug2.coor.x, 2) + pow(krug1.coor.y - krug2.coor.y, 2)) < krug1.radius + krug2.radius)
	{
		std::cout << "���������� ������������."<<std::endl;
	}
	else
	{
		std::cout << "���������� �� ������������." << std::endl; 
	}
}
void task3()
{
	Triangle t{3, 4, 5, Color::green};
	std::cout << "������� ������������ ����� "<< t.a<< ", "<<t.b << " � "<< t.c<<", � ���� � ���� ";
	switch (t.color)
	{
	case Color::red:
		std::cout << "�������";
		break;
	case Color::orange:
		std::cout << "���������";
	break;
	case Color::yellow:
		std::cout << "�����";
		break;
	case Color::green:
		std::cout << "������";
		break;
	case Color::lazur:
		std::cout << "�������";
		break;
	case Color::blue:
		std::cout << "�����";
		break;
	case Color::violet:
		std::cout << "����������";
		break;
	default:
		std::cout << "������������";
		break;
	}
}
int main()
{
	setlocale(0, "");
	task3();
	return 0;
}