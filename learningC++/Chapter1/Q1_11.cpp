//
//  Q1_11.cpp
//  learningC++
//
//  Created by Nathan Turner on 2/8/20.
//  Copyright © 2020 Nathan Turner. All rights reserved.
//

#include <iostream>

int main() {
    int num1, num2, i;
    std::cout << "Please enter two numbers, and I will output the numbers between these two numbers." << std::endl;
    std::cin >> num1;
    std::cout << "First num: " << num1 << std::endl;
    std::cin >> num2;
    std::cout << "Second num: " << num2 << std::endl;

    if (num1 > num2) {
        i = num1;
        while (i >= num2) {
            std::cout << i << std::endl;
            --i;
        }
    } else {
        i = num2;
        while (i >= num1) {
            std::cout << i << std::endl;
            --i;
        }
    }
    return 0;
}
