#pragma once
#include <vector>

void f_81()
{
	int n;
	std::cin >> n;
	std::vector<int> arr;
	for (int i = 1; i <= n; i++)
	{
		int val;
		std::cin >> val;
		arr.push_back(val);
	}
	auto max = std::max_element(arr.begin(), arr.end());
	auto min = std::min_element(arr.begin(), arr.end());

	std::cout << *min << " " << *max;
}