#include <iostream>

int main()
{
    int first, second, third;

    std::cout << "\nEnter first number: ";
    std::cin >> first;

    std::cout << "Enter second number: ";
    std::cin >> second;

    std::cout << "Enter third number: ";
    std::cin >> third;

    std::cout << "Middle: " << (first  + second + third) / 3;

    return 0;
}