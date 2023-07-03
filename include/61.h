#pragma once

void f_61()
{
	int first_1;
	int first_2;
	int second_1;
	int second_2;
	int third_1;
	int third_2;
	int for_1;
	int for_2;

	std::cin >> first_1;
	std::cin >> first_2;
	std::cin >> second_1;
	std::cin >> second_2;
	std::cin >> third_1;
	std::cin >> third_2;
	std::cin >> for_1;
	std::cin >> for_2;
	

	int res_1 = first_1 + second_1 + third_1 + for_1;
	int res_2 = first_2 + second_2 + third_2 + for_2;

	if (res_1 > res_2)
	{
		std::cout << 1;
	}
	else if (res_1 < res_2) {
		std::cout << 2;
	}
	else {
		std::cout << "DRAW";
	}


}