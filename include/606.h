#pragma once
#include <iostream>
void f_606()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a <= b + c && b <= a + c && c <= a + b) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}