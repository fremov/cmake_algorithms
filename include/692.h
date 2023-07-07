#pragma once
void f_692()
{
	int a;
	std::cin >> a;

	if (a == 1 || 
		a == 2 || 
		a == 4 || 
		a == 8 || 
		a == 16 || 
		a == 32 || 
		a == 64 || 
		a == 128 || 
		a == 256 || 
		a == 512 || 
		a == 1024 || 
		a == 2048 ||
		a == 4096 ||
		a == 8192)
	{
		std::cout << "YES";

	}
	else {
		std::cout << "NO";
	}
	
}