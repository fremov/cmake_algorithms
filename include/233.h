#pragma once
#include <iostream>

void f_233()
{
    const int BUS_HEIGHT = 437;

    int a, b;
    std::cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        std::cin >> b;
        if (b <= BUS_HEIGHT)
        {
            std::cout << "Crash " << i + 1;
            return 0;
        } 
    }

    std::cout << "No crash";
    
}