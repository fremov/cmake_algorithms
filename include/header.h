#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

int generateRandomNumber(int minRange, int maxRange) {
	return minRange + rand() % (maxRange - minRange + 1);
}

void arrays()
{
	std::vector<int> arr_1;
	int x;
	int minRange;
	int maxRange;
	std::cout << "Enter num of elements in array: ";
	std::cin >> x;
	std::cout << "Enter min/max values: ";
	std::cin >> minRange >> maxRange;
	for (int i = 1; i <= x; i++)
	{
		int val = generateRandomNumber(minRange, maxRange);
		arr_1.push_back(val);
	}
	std::cout << "base array : \t\t";
	for (const int& a : arr_1)
	{
		std::cout << a << '\t';
	}
	std::cout << '\n';
	std::cout << "reversed array : \t";
	std::reverse(arr_1.begin(), arr_1.end());
	for (const int& a : arr_1)
	{
		std::cout << a << '\t';
	}
	std::cout << '\n';
	int min = *std::min_element(arr_1.begin(), arr_1.end());
	int max = *std::max_element(arr_1.begin(), arr_1.end());

	std::cout << "min element array : \t" << min << '\n';
	std::cout << "max element array : \t" << max << '\n';

	std::cout << "min->max: \t\t";
	std::sort(arr_1.begin(), arr_1.end());
	for (const int& a : arr_1)
	{
		std::cout << a << '\t';
	}
	std::cout << '\n';
	std::cout << "max->min: \t\t";
	std::sort(arr_1.begin(), arr_1.end(), [](int a, int b) {
		return a > b;
		});
	for (const int& a : arr_1)
	{
		std::cout << a << '\t';
	}

}
