#include <iostream>
#include <limits>

int main() {
    int a = std::numeric_limits<int>::max(); // max value of int
    int b = 1;

    // Incorrect overflow check: this won't catch overflow
    if (a + b > a) {
        std::cout << "Overflow detected!" << std::endl;
    } else {
        std::cout << "No overflow!" << std::endl;
    }

    return 0;
}
