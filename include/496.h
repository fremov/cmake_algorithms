#pragma once
#include <iostream>


void f_496()
{
	int n;
	std::cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int val;
		std::cin >> val;
		res += val;
	}

	std::cout << res;
}