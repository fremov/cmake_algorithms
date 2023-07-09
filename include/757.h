#pragma once 

#include <algorithm>
#include <iostream>
void f_757()
{
	const long long CARBON = 2;
	const long long HYDROGEN = 6;
	const long long OXYGEN = 1;


	long long a, b, c;
	std::cin >> a >> b >> c;

	a /= CARBON;
	b /= HYDROGEN;
	c /= OXYGEN;
	long long res = std::min({ a, b, c });
	std::cout << res;
}