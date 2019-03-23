#include <iostream>
#include <limits>
using namespace std;
const float PI = 3.14159F;
const int Days_In_Year = 365;
const int Days_In_Week = 7;
int main() {
	int a;
	unsigned int b;
	short int c;
	char d;
	float e;
	a = 0;
	b = 0XFFFFFFFF;
	c = sizeof(long long);
	d = numeric_limits<char>::max();
	int first = 0B11111111111111111111111111111111;
	const short int second = 0XFF;
	const long long int third = 0754321LL;
	bool fourth = 0B1;
	char fifth = 'f';
	unsigned int sixth = 0XFU;
	const long long int seventh = 0xFFFFFFFFFFFFFFFF;
	/*
	1-Unsigned char
	2-float
	3-unsigned long long int
	4-float
	*/
	float doublepi = PI * 2;
	unsigned char Weeks_in_Year = Days_In_Year / Days_In_Week;
}
