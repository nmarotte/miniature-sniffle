#include <iostream>
#include "Model/Components/Air.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Air* some_fresh_air = new Air(294.15, 1, 1.225, 1, 1);
    return 0;
}
