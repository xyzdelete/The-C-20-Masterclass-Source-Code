#include <iostream>

int main()
{
    std::cout << "Please type in an integral value: " << std::endl;
    int value { };
    std::cin >> value;

    if (value % 2 == 0)
    {
        std::cout << value << " is even" << std::endl;
    }
    else
    {
        std::cout << value << " is odd" << std::endl;
    }

    return 0;
}