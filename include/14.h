#pragma once
#include <cmath>
// мнд
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void f_14()
{
    int a, b;
    std::cin >> a >> b;
    int nod = gcd(a, b);

    int nok = (std::abs(a * b) / nod);

    std::cout << nok;
}