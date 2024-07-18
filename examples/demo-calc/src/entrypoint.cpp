//
// Created by happymonkey1 on 7/18/24.
//

#include "../include/calculator.h"

#include <iostream>

auto main([[maybe_unused]] int argc, [[maybe_unused]] char** argv) -> int {
    std::cout << "[demo-calc]: Hello from demo-calc, built using kb-cppbuild!\n";

    i32 a = 0;
    i32 b = 1;

    std::cout << "[demo-calc]: Adding " << a << " + " << b << "\n";
    i32 result = add(a, b);

    std::cout << "[demo-calc]: Result is " << result << "\n";

    return 0;
}