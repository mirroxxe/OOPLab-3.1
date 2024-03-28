#include <iostream>
#include "Liquid.h"
#include "Alcohol.h"

int main() {
    Liquid liquid;
    std::cout << "Enter data for liquid:" << std::endl;
    std::cin >> liquid;

    std::cout << "Liquid data:" << std::endl;
    std::cout << liquid << std::endl;

    Alcohol alcohol;
    std::cout << "Enter data for alcohol:" << std::endl;
    std::cin >> alcohol;

    std::cout << "Alcohol data:" << std::endl;
    std::cout << alcohol;

    return 0;
}