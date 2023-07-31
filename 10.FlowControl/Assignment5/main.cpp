#include <iostream>

int main()
{
    size_t age { };

    // Only applicable if your age is between 21 and 39   
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    if (age >= 21)
    {
        if (age <= 39)
        {
            std::cout << "There's an applicable medical treatment for you." << std::endl;
        }
        else
        {
            std::cout << "There's not an applicable medical treatment for you." << std::endl;
        }
    }
    else
    {
        std::cout << "There's not an applicable medical treatment for you." << std::endl;
    }

    return 0;
}