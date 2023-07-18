#include <iostream>

int main()
{
    std::cout << "Welcome to box calculator. Please type in length, width and height information: " << std::endl;
    std::cout << "length : ";
    double length { };
    std::cin >> length;
    std::cout << "width : ";
    double width { };
    std::cin >> width;
    std::cout << "height : ";
    double height { };
    std::cin >> height;

    const double base_area { width * length };
    const double volume { base_area * height };

    std::cout << "The base area is : " << base_area << std::endl;
    std::cout << "The base volume is : " << volume << std::endl;

    return 0;
}