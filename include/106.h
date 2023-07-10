#pragma once

#include <iostream>
void f_106()
{
    int n;
    std::cin >> n;

    int counter_1 = 0;
    int counter_2 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        if (x == 0)
        {
            counter_1++;
        }
        else
        {
            counter_2++;
        }
    }

    if (counter_1 > counter_2)
    {
        std::cout << counter_2;
    }
    else
    {
        std::cout << counter_1;
    }
}