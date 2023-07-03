#pragma once
#include <vector>
#include <algorithm>
void f_149() {
	int a;
	std::cin >> a;
	std::vector<int> arr;

	for (int i = 1; i <= a; i++)
	{
		int val;
		std::cin >> val;
		arr.push_back(val);
	}
	std::reverse(arr.begin(), arr.end());
	for (const auto& a : arr)
	{
		std::cout << a << " ";
	}
}