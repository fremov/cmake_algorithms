#pragma once

#include <vector>
#include <iostream>
#include <string>
void f_66()
{
	std::string keywords = "qwertyuiopasdfghjklzxcvbnmq";

	char symbol;
	std::cin >> symbol;

	std::string result;

	for (int i = 0; i < keywords.size(); i++)
	{
		if (symbol == keywords[i])
		{
			std::cout << keywords[i + 1]; break;
		}
	}

}