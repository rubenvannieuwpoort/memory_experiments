#include "experiments/store_buffering.hpp"
#include <iostream>

int main() {
    std::cout << "Store buffering: " << storeBuffering() / 100000.0 << "%\n";
    return 0;
}
