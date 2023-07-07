#pragma once
#include <iostream>
#include <vector>


void f_264()
{
	std::vector<int> arr_1;
	int x;
	std::cin >> x;

	for (int i = 1; i <= x; i++)
	{
		int val;
		std::cin >> val;
		arr_1.push_back(val);
	}
	int counter = 0;
	int maxCounter = 0;
	for (const int& a : arr_1)
	{
		if (a > 0)
		{
			counter += 1; 
		}
		else {
			if (counter > maxCounter)
			{
				maxCounter = counter;
			}
			counter = 0; 
		}
	}
	if (maxCounter > counter)
	{
		std::cout << maxCounter;
	}
	else {
		std::cout << counter << '\n';
	}
	
	
}