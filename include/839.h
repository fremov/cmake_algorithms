#pragma once

#include <iostream>
#include <string>
void f_839()
{
	std::string s;
	std::cin >> s;
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
		{
			count++;
		}
	}
	if (count > 0)
	{
		std::cout << "NO";
	}
	else {
		std::cout << "YES";
	}
}