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
            // ���� ������� ��� ����� 1, ���������� �������
            if (count > maxCount) {
                maxCount = count;
            }
            count = 0;
        }
        else {
            // ���� ������� ��� ����� 0, ����������� �������
            count++;
        }
        number >>= 1;  // �������� ����� �� ���� ��� ������
    }

    std::cout << maxCount;
}