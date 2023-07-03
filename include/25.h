#pragma once

void f_25()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;

	if (a > b)
	{
		std::cout << ">";
	}
	else if (a < b) {
		std::cout << "<";
	}
	else {
		std::cout << "=";
	}
}