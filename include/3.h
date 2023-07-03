#pragma once

#include <iostream>

void f_3()
{
	int num;
	std::cin >> num;
	int res;
	res = (num / 10);
	
	res *= res + 1;
	if (res == 0)
	{
		std::cout << 25 << std::endl;
	}
	else {
		std::cout << res << 25 << std::endl;
	}
	

}