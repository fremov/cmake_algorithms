//
// Created by Frem on 01.07.2023.
//

#include <string>
#ifndef TEMPLATE_CMAKE_HEADER_H
#define TEMPLATE_CMAKE_HEADER_H


std::string toBinaryString(unsigned int decimal) {
    std::string binary;
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

#endif //TEMPLATE_CMAKE_HEADER_H
