//
//  Q1_13.cpp
//  learningC++
//
//  Created by Nathan Turner on 2/8/20.
//  Copyright © 2020 Nathan Turner. All rights reserved.
//

#include <iostream>

int main() {
    int total_sum, num1, num2 = 0;
    std::cout << "Printing sum to numbers between 50 and 100" << std::endl;
    for (int i = 50; i <= 100; ++i) {
        total_sum = total_sum + i;
    }
    std::cout << "The total sum is: " << total_sum << std::endl;
    std::cout << "Counting down from 10 to 0" << std::endl;
    for (int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
    }
    std::cout << "Please enter two numbers." << std::endl << "First number: ";
    std::cin >> num1;
    std::cout << "Second number: ";
    std::cin >> num2;
    if (num1 > num2) {
        for (int i = num1; i >= num2; --i) {
            std::cout << i << std::endl;
        }
    } else {
        for (int i = num2; i >= num1; --i) {
            std::cout << i << std::endl;
        }
    }
}
