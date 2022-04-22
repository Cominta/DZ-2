#include <iostream>

int main()
{
    float uah;

    std::cout << "\nEnter UAH: ";
    std::cin >> uah;

    std::cout << "USD: " << uah / 29.55 << "\n";
    std::cout << "EUR: " << uah / 31.92 << "\n";
    std::cout << "BTC: " << uah / 1196217 << "\n"; 

    return 0;
}