#pragma once

#include <iostream>
#include <string>

void f_324()
{
    std::string num;
    std::cin >> num;

    if (num[0] == num[3] && num[1] == num[2])
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}