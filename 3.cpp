#include <iostream>

int main()
{
    int km;

    std::cout << "\nEnter kilometers: ";
    std::cin >> km;

    std::cout << "Nautical miles: " << km / 1.852 << "\n";
    std::cout << "Statute miles: " << km / 1.60934 << "\n";

    return 0;
}