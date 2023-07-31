#include <iostream>

int main()
{
    std::cout << "Welcome to territory control. Please type in your x and y positions" << std::endl;

    std::cout << "Type you x location: ";
    int x;
    std::cin >> x;
    std::cout << "Type you y location: ";
    int y;
    std::cin >> y;

    constexpr size_t width { 20 };
    constexpr size_t height { 10 };

    if (((x >= -10) && (x <= 10))
        &&
        (y >= -5) && (y <= 5))
    {
        std::cout << "You are completely sorrounded. Don't move!" << std::endl;
    }
    else
    {
        std::cout << "You're out of reach!" << std::endl;
    }

    return 0;
}