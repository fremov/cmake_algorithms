#pragma once
#include <iostream>
void f_907()
{

	int a, b, c;
	std::cin >> a >> b >> c;
	int diametr = c * 2;

	if (diametr <= a && diametr <= b)
	{
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}