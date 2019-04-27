#include <iostream>
#include "Data.hpp"
void square(int x)
{
	for (int i = 1; i <= x; ++i)
	{
		std::cout << i*i << ' ';
	}
}
float cylinder(float a, float b)
{
	return a*a*b*3.14;
}
int mintwo(int a, int b)
{
	if (a > b) { return b; }
	else { return a; }
}
int minfour(int a, int b, int c, int d)
{
	return mintwo(mintwo(a, b), mintwo(c, d));
}
int main()
{
	setlocale(0, "");
	int n;
	float r, h;
	int n1, n2, n3, n4;
	std::cout << "¬ведите число n и получите квадраты первых n чисел." << std::endl;
	std::cin >> n;
	square(n);
	std::cout <<std::endl<< "¬ведите радиус и высоту цилиндра и узнайте его объЄм." << std::endl;
	std::cin >> r>> h;
	std::cout<<cylinder(r, h)<<std::endl;
	std::cout << "¬ведите четыре числа и получите минимальное из них." << std::endl;
	std::cin >> n1 >> n2>>n3>>n4;
	std::cout << minfour(n1,n2,n3,n4) << std::endl;

	return 0;
}