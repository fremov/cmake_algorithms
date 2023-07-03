#pragma once
#include <vector>

void f_43()
{
    int number;
    std::cin >> number;
    int count = 0;
    int maxCount = 0;

    while (number != 0) {
        if (number & 1) {
            // Если текущий бит равен 1, сбрасываем счетчик
            if (count > maxCount) {
                maxCount = count;
            }
            count = 0;
        }
        else {
            // Если текущий бит равен 0, увеличиваем счетчик
            count++;
        }
        number >>= 1;  // Сдвигаем число на один бит вправо
    }

    std::cout << maxCount;
}