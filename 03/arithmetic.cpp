#include <iostream>
int main() {
	setlocale(0, "");
	std::cout<< "Çàäàíèå ïåðâîå, ââåäèòå òð¸õçíà÷íîå ÷èñëî, âû ïîëó÷èòå ñóììó åãî öèôð."<<std::endl;
	int x;
	std::cin >> x;
	std::cout<< (x /100) + ((x%100)/10)+(x%10) <<std::endl;
	std::cout << "Çàäàíèå âòîðîå, ââåäèòå âðåìÿ è ïîëó÷èòå ðàçíèöó ìåæäó íèìè â ñåêóíäàõ." << std::endl;
	int h1; int m1; int s1; int h2; int m2; int s2;
	std::cin >>h1; std::cin >> m1; std::cin >> s1; std::cin >> h2; std::cin >> m2; std::cin >> s2;
	std::cout << (h2-h1) *3600 + (m2-m1)*60 + s2-s1 << std::endl;
	std::cout << "Çàäàíèå òðåòüå, ââåäèòå ãðèãîðèàíñêóþ äàòó è ïîëó÷èòå å¸ ïåðåâîä â þëèàíñêóþ." << std::endl;
	int day; int month; int year;
	std:: cin >>day; std::cin >> month; std::cin >> year;
	int a = (14 - month) / 12; int y = year + 4800 - a; int m = month + (12 * a) - 3;
	std::cout << day+((153 * m+2)/5)+365*y+(y/4)-(y/100)+(y/400)-32045 << std::endl;
	std::cout << "Çàäàíèå ÷åòâ¸ðòîå, ââåäèòå êîëè÷åñòâî ñåêóíä è ïîëó÷èòå åãî ðåïðåçåíòàöèþ." << std::endl;
	std::cin >> x;
	std::cout << x / 3600 << ':' << ((x % 3600) / 60) / 10 << ((x % 3600) / 60) % 10 << ':' << ((x % 3600) % 60) / 10 << ((x % 3600) % 60) % 10 << std::endl;
	std::cout << "Çàäàíèå ïÿòîå, ââåäèòå ÷èñëî è èäóùåå çà íèì ÷¸òíîå." << std::endl;
	std::cin >> x;
	std::cout << ((x/2)*2)+2 << std::endl;
	std::cout << "Çàäàíèå øåñòîå, ââåäèòå ÷åòûð¸õçíà÷íîå ÷èñëî è óçíàéòå ñèììåòðè÷íî ëè îíî:\\
îäèí - ñèììåòðè÷íî, äðóãèå çíà÷åíèÿ - íåò." << std::endl;
	std::cin >> x;
	std::cout << (x/1000) + ((x%1000)/100)- ((x%100) /10) - (x % 10)+1 << std::endl;
}
