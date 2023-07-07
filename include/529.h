#pragma once
#include <iomanip>
#include <cmath>
void f_529()
{

	double a, b, x, y;
	std::cin >> a >> b >> x >> y;
	
	double res = std::sqrt(std::pow(b - a, 2) + std::pow(y - x, 2));

	std::cout << std::setprecision(12) << std::fixed << res << std::endl;
}