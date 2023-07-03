#pragma once
#include <iostream>
#include <map>

// хуйня
void f_131()
{
    int n;
    std::cin >> n;
    std::map<int, int> arr;
    int value;
    int key;
    bool hasMale = false; // Переменная для отслеживания наличия мужских жильцов

    for (int i = 1; i <= n; i++)
    {
        std::cin >> key >> value;
        arr[key] = value;

        if (value == 1) // Проверяем пол на мужской
            hasMale = true;
    }

    int max_age = -1;
    int max_age_index = -1;
    int current_index = 0;

    if (hasMale)
    {
        for (const auto& a : arr)
        {
            if (a.second == 1) // Проверяем пол на мужской
            {
                if (a.first > max_age)
                {
                    max_age = a.first;
                    max_age_index = current_index;
                }
            }
            current_index++;
        }
    }
    else
    {
        max_age_index = -1;
    }

    std::cout << max_age_index << std::endl;
}
