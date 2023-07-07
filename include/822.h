#pragma once
#include <cmath>
void f_822()
{
	// площадь треугольника 
	double x_1, y_1, x_2, y_2, x_3, y_3;

	std::cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3;

	double S;
	S = std::abs(((x_1 - x_2) * (y_3 - y_2) - (y_1 - y_2) * (x_3 - x_2)) / 2);

	std::cout << std::fixed << S;

}