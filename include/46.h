#pragma once
#include <iostream>
#include <cmath>
void f_46()
{
	const double E = 2.7182818284590452353602875;
	int n;
	std::cin >> n;
	long double res;
	res = std::round(E * pow(10, n)) / pow(10, n);
	std::cout << res;

}