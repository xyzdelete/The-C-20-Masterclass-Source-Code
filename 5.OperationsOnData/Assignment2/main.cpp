#include <iostream>

int main()
{
    std::cout << "Please enter a degree value in Celsius: " << std::endl;

    double celsius;
    std::cin >> celsius;
    const double Fahrenheit { (9.0 / 5) * celsius + 32 };
    std::cout << celsius << " Celsius is " << Fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}