#pragma once

void f_755() {

	int a;
	int b;
	int c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	int res =  a + b - c;

	if (res < 0)
	{
		std::cout << "Impossible";
	}
	else {
		std::cout << res;
	}

	// s = x+y-z
	// if (s < 0) write(’Impossible’); else write(s)

}