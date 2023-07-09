#pragma once
#include <string>
#include <algorithm>
void f_7()
{
	std::string a, b, c;

	std::cin >> a >> b >> c;
    
    int num1, num2, num3;
    num1 = std::stoi(a);
    num2 = std::stoi(b);
    num3 = std::stoi(c);

    if (num1 < 10 && num2 < 10 && num3 < 10)
    {
        if (a.length() > b.length() && a.length() > c.length()) {
            std::cout << a;
        }
        else if (b.length() > a.length() && b.length() > c.length()) {
            std::cout << b;
        }
        else {
            std::cout << c;
        }
    }
    else {

        if (a.length() > b.length() && a.length() > c.length()) {
            std::cout << a;
        }
        else if (b.length() > a.length() && b.length() > c.length()) {
            std::cout << b;
        }
        else {
            std::cout << c;
        }
    }

   
}