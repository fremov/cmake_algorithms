#pragma once

#include <iostream>

void f_8()
{
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a * b == c)
	{
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}