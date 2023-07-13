#pragma once

#include <iostream>
#include <cmath>
void f_26()
{
	double x1, y1, r1, x2, y2, r2;

	std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

	double t = x2 - x1;
	double t_2 = y2 - y1;

	double res = std::sqrt((std::pow(t, 2)) + (std::pow(t_2, 2)));

	if (r1 + r2 >= res && res + r2 >= r1 && res + r1 >= r2)
	{
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}