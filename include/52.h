#pragma once

#include <iostream>
#include <string>

void f_52()
{
    std::string number;
    std::cin >> number;
    
    int array[6];
    for (int i = 0; i < 6; ++i) {
        array[i] = number[i] - '0';
    }

    int firstSum = array[0] + array[1] + array[2];
    int lastSum = array[3] + array[4] + array[5];

    if (firstSum == lastSum)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}