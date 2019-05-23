#include <iostream>
#include <random>
#include <vector>
#include <ctime>

#define NUM 100000000

int main() {
    std::random_device dev;
    std::mt19937 mt(dev());
    std::uniform_int_distribution<int> u(1, 3);
    size_t atr = 0;

    std::cout << "Number of awards: " << std::endl;
    std::cout << atr;

    for (size_t i = 0; i < NUM; ++i) {
        int ruby = u(mt);
        int c = u(mt);
        if (c != ruby) {
            atr++;
        }
        if (!(i % 5000)) {
            std::cout << std::flush << '\r' << atr;
        }
    }
    std::cout << std::flush << '\r' << atr;
    std::cout << std::endl;

    std::cout << "Winning probability: " << (double)atr / NUM << std::endl;

    return 0;
}