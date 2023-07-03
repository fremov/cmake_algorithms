#pragma once
#include <iostream>

// read(n)
//if (n mod 2 = 1 and n > 1) write(n); else write(n div 2)
void f_539()
{
	int a;
	std::cin >> a;
	if (a % 2 == 1 && a > 1)
	{
		std::cout << a;
	}
	else {
		std::cout << a / 2;
	}
}