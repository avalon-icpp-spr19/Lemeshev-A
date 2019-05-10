#include "Data.hpp"
int ADMIN_PAR;
bool MISTAKE=true;

void end_part()
{
	int input;
	bool endmistake = true;
	while (endmistake)
	{
		endmistake = false;
		std::cout << "��������� ���������, ������ ���������� �������������? ���� ��, ������� 1, ���� ��� - 2." << std::endl;
		input = lem::answer_checked();
		switch (input)
		{
		case 1:
			MISTAKE = true;
			break;
		case 2:
			break;
		default:
			std::cout << "������� ������ 1 ��� 2, ����� �������." << std::endl;
			endmistake = true;
			break;
		}
	}
}
//====================================================================================================
void part1()
{
	date printdate = {};
	int count=0;
	int ans;
	date * mass = nullptr;
		std::cout << "������� ���������� ��������� ���������." << std::endl;
		ans = lem::answer_checked();

		for (int i = 0; i < ans; ++i)
		{
			if (lem::simulation(ADMIN_PAR, 23, &printdate)) { ++count; }
		}
		float x = count;
		float y = ans;
		std::cout << "������� - " << count << ", %-" << x / y * 100 << std::endl;
	 end_part();
}
//====================================================================================================
void part2()
{
	ADMIN_PAR = 1;
		part1();
	ADMIN_PAR = 0;
}
//====================================================================================================
void part3()
{
	bool cycle = true;
	int count=0;
	date input, same;

	std::ifstream read;
	read.open("part3input.txt");
	read >> input.day >> input.month;
	read.close();
	std::cout << "���� ���� " << input.day <<' '<< input.month << " , ��� ������������..."<<std::endl;

	std::ofstream write;
	write.open("log.txt");
	while(cycle)
		{
		++count;
		same = { 0,0 };
		if (lem::simulation(ADMIN_PAR, 23, &same))
		{
			if ((same.day == input.day) && (same.month == input.month))
			{
				std::cout << "���� ������� � ������ � "<< count <<" ���������."<<std::endl;
				cycle = false;
			}
		}
		write << "��������� " << count << ", " << same.day << ' ' << same.month << std::endl;
		}
	write.close();
	end_part();
}
//====================================================================================================
void part4()
{
	int iteration = 0;
	int  n;
	int count=0;
	float x, y;
	date output;
	float percent;
	float result = 0.0;
	bool flag=true;
	while (flag)
	{
		flag = false;
		std::cout << "����� ������� ��� ���������� �� 0.1 �� 99.9?" << std::endl;
		percent = lem::answer_checked_f();
		if (percent < 0.1)
		{
			std::cout << "�� ������� ����� ���� ������ � 0.1." << std::endl;
			flag = true;
		}
		else if(percent>99.9)
		{
			std::cout << "�� ������� ������� ���� ������ � 99.9." << std::endl;
			flag = true;
		}
	}
	flag = true;
	while (flag)
	{
		flag = false;
		std::cout << "������� ��������� ��������� ��� ������ ������?" << std::endl;
		n = lem::answer_checked();
		if (n < 1)
		{
			std::cout << "�� ������� ���� � ������������� �����." << std::endl;
			flag = true;
		}
	}
	while (result<=percent)
	{
		++iteration;
		count = 0;
		for (int i = 0; i < n; ++i)
		{
			if (lem::simulation(0, iteration, &output)) { ++count; }
		}
		x = count;
		y = n;
		result = x / y*100;
		std::cout << "���� � ������  " << iteration << " �������, �� �����������  " << result << '%' << std::endl;
	}
	std::cout << "������ ������� ��� �������� ��� "<< iteration << " �������." <<std::endl;
	end_part();
}
//====================================================================================================
int main()
{
	int answer;
	setlocale(0, "");
	while (MISTAKE)
	{
		MISTAKE = false;
		std::cout << "����� ����� ������ ������ ������������? ������� �������������� ����� �� 1 �� 4 ��� 5, ����� �����." << std::endl;
		answer = lem::answer_checked();

		switch (answer)
		{
		case 1:
			ADMIN_PAR = 0;
			part1();
			break;
		case 2:
			part2();
			break;
		case 3:
			part3();
			break;
		case 4:
			part4();
			break;
		case 5:
			break;
		default:
			std::cout << "�������� ������������ �����, ������� ������ ����������� ����� �� 1 �� 5 ������������." << std::endl;
			MISTAKE = true;
			break;
		}
	}
	return 0;
}