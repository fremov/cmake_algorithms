#pragma once

#include <vector>
#include <algorithm>
void f_754()
{
	std::vector<int> arr;
	bool test = false;
	for (int i = 1; i <= 3; i++)
	{
		int val;
		std::cin >> val;
		if (val <= 727 && val >= 94)
		{
			arr.push_back(val);
		}
		else {
			test = true;
		}
	}
	if (test)
	{
		std::cout << "Error";
	}
	else {
		auto max_value = std::max_element(arr.begin(), arr.end());
		std::cout << *max_value;
	}
	
}