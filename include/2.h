#pragma once
#include <iostream>


void f_2()
{
	int n;
	std::cin >> n;
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	if (sum > 0)
	{
		std::cout << sum;
	}
	else {
		std::cout << 1;
	}
	

}