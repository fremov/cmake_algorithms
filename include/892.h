#pragma once
void f_892()
{
	int a;
	std::cin >> a;

	switch (a)
	{
	case 3:
	case 4:
	case 5:
		std::cout << "Spring"; break;
	case 6:
	case 7:
	case 8:
		std::cout << "Summer"; break;
	case 9:
	case 10:
	case 11:
		std::cout << "Autumn"; break;
	case 1:
	case 2:
	case 12:
		std::cout << "Winter"; break;
	default:
		std::cout << "Error"; break;
		break;
	}

}