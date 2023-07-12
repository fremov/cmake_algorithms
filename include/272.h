#pragma once

#include <iostream>
#include <vector>
void f_272()
{
	std::vector<int> first_array{};
	
	int val;
	std::string str;
	std::getline(std::cin, str);

	first_array.push_back(str);
	

	for (const int& a: first_array)
	{
		std::cout << a;
	}

}

