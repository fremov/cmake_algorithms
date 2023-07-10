#pragma once
#include <iostream>

void f_970()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b == c)
    {
        std::cout << "YES";
    }
    else if (a + c == b)
    {
        std::cout << "YES";
    }
    else if (c + b == a)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}