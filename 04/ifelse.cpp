#include <iostream>
#include <cmath>
/*using namespace std äëÿ ñëàáàêîâ.*/
int main() {
	setlocale(0, "")
    /*=============================================================================================================*/;
	int a, b, c;
	std::cout << "Çàäàíèå ïåðâîå, ââåäèòå ó ñòîðîíû è óçíàéòå, ìîæíî ëè åãî ïîñòðîèòü èç íèõ." << std::endl;
	std::cin >> a >> b>>c;

	if (a + b < c || a + c <b || b+c <a )
	{
		std::cout << "Íåò." << std::endl;
	}
	else
	{
		std::cout << "Äà." << std::endl;
	}
	/*=============================================================================================================*/
		int number;
	std::cout << "Çàäàíèå âòîðîå, ââåäèòå ÷èñëî ðóáëåé è óçíàéòå, êàê åãî ïðàâèëüíî ñêëîíÿòü." << std::endl;
	std::cin >> number;
	if (number % 100 / 10 != 1)
	{
		number = number % 10;
		switch (number)
		{
		case 1:
			std::cout << "Ðóáëü." << std::endl;
			break;
		case 2:
		case 3:
		case 4:
			std::cout << "Ðóáëÿ." << std::endl;
			break;
		default:
			std::cout << "Ðóáëåé." << std::endl;
			break;
		}
	}
	else
	{
		std::cout << "Ðóáëåé." << std::endl;
	}
	/*=============================================================================================================*/
		bool enemyInFront, isBoss;
	int robotHealth;
	std::cout << "Çàäàíèå òðåòüå, ââåäèòå çíà÷åíèÿ è óçíàéòå, áóäåò ëè ðîáîò ñòðåëÿòü." << std::endl;
	std::cin >> enemyInFront>> isBoss>> robotHealth;
	if ((enemyInFront == true && isBoss == true && robotHealth >= 50) || enemyInFront == true && isBoss == false)
	{
		std::cout << "Fire." << std::endl;
	}
	/*=============================================================================================================*/
	/*Èñïîëüçóþòñÿ a,b,c èç ïåðâîãî çàäàíèÿ*/
	std::cout << "Çàäàíèå ÷åòâ¸ðòîå, ââåäèòå îöåíêè è óçíàéòå îáùóþ." << std::endl;
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
	std::cout << "Çàäàíèå ïÿòîå, ââåäèòå äàòó è óçíàéòå, ðåàëüíà ëè îíà." << std::endl;
	std::cin >> d >> m >> y;
	/*if ((y % 400 == 0) || (y % 100 !=0 && y % 4 == 0))
	{
	} óñëîâèå âûñîêîñíîñòè ãîäà (äëÿ ôåâðàëÿ)*/
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		//ïî 31 äíþ
		if (d > 31)
		{
			flag = false;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		//ïî 30 äíåé
		if (d > 30)
		{
			flag = false;
		}
		break;
	case 2:
		//âîîáùå çàøêâàð ñ ãîäàìè
		if ((y % 400 == 0) || (y % 100 !=0 && y % 4 == 0))//óñëîâèå âûñîêîñíîñòè ãîäà (äëÿ ôåâðàëÿ)
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
	default: //íåñóùåñòâóþùèé ìåñÿö
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
	std::cout << "Çàäàíèå øåñòîå, ââåäèòå êîîðäèíàòû è óçíàéòå, ñìîäåò ëè òóäó ïîïàñòü ôðåçü." << std::endl;
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
