#pragma once

#include <iostream>
#include <vector>
void f_5()
{
	int n;
	std::cin >> n;
	std::vector<int> all_dates;
	std::vector<int> even_dates;
	std::vector<int> not_even_dates;



	for (int i = 1; i <= n; i++)
	{
		int value;
		std::cin >> value;
		all_dates.push_back(value);
	}

	for (const auto& a : all_dates)
	{
		if (a % 2 == 0)
		{
			even_dates.push_back(a);
		}
		else {
			not_even_dates.push_back(a);
		}
	}

	for (const auto& a : not_even_dates)
	{
		std::cout << a << " ";
	}
	std::cout << '\n';
	for (const auto& a : even_dates)
	{
		std::cout << a << " ";
	}
	std::cout << '\n';
	if (even_dates.size() > not_even_dates.size())
	{
		std::cout << "YES";
	}
	else if (even_dates.size() > not_even_dates.size()){
		std::cout << "NO";
	}
	else {
		std::cout << "YES";
	}
}