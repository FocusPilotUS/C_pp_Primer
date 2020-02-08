//
//  main.cpp
//  learningC++
//
//  Created by Nathan Turner on 2/7/20.
//  Copyright © 2020 Nathan Turner. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int current_num = 10;
    while (current_num >= 0) {
        std::cout << current_num << std::endl;
        --current_num;
    }
    return 0;
}
