#pragma once

#include <iostream>
int calc(int n, int m)
{
    int d = 19 * m + (n + 239) * (n + 366) / 2;
    return d;
}
void f_35()
{
    int size;
    std::cin >> size;
    for (int i = 0; i < size; i++)
    {
        int n,m;
        std::cin >> n >> m;
        int res = calc(n,m);
        std::cout << res << '\n';
    }
    
}