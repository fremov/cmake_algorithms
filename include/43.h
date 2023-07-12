#pragma once

#include <string>
void f_43()
{
    std::string number;
    std::cin >> number;
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < number.size(); i++)
    {
        if (number[i] == '0')
        {
            count++;
            if (count > maxCount)
            {
                maxCount = count;
            }
        }
        else {
            count = 0;
        }
    }
    std::cout << maxCount;

   
}