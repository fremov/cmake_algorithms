#pragma once
void f_777()
{
	
	int a, b;
	std::cin >> a >> b;
	// 3 5
	
	if (a != b && b > a)
	{
		std::cout << b - a;
	}
	else {
		std::cout << 0;
	}
}