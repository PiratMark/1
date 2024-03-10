#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	int x;

	std::cout << "x=";
	std::cin >> x;

	if (x > 99999 && x < 1000000)
	{
		if (x / 100000 + x / 10000 % 10 + x / 1000 % 10 == x / 100 % 10 + x / 10 % 10 + x % 10)
		std::cout << "счастливый";
		else std::cout << "не счастливый";
	}
	else
	{
		std::cout << "ошибка";
	}
}