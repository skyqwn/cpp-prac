#include <iostream>

int main() {

    int list[] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; ++i) {
        std::cout << list[i] << ' ';
    }
    std::cout << std::endl;

    for (auto element : list) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    for (const auto&element : list) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    return 0;
}