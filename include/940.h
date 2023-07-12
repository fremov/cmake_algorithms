#pragma once

#include <iostream>
#include <string>
void f_940()
{
    int num;
    std::cin >> num;

    std::string incorrect_word;
    std::cin >> incorrect_word;

    incorrect_word.erase(num - 1, 1);
    std::cout << incorrect_word;
}
