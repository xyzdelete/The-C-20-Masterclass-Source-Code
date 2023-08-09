#include <iostream>
#include <ctime>

int main()
{
    const char operations[] {
        '+',
        '-',
        '*'
    };

    char operation {};

    bool end { false };

    char input {};

    while (!end)
    {
        std::srand(std::time(0));

        const int intA { std::rand() % 200 };
        const int intB { std::rand() % 200 };

        operation = operations[rand() % 3];

        std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;
        std::cout << "What's the result of " << intA << " " << operation << " " << intB << ": ";

        int result {};

        std::cin >> result;

        switch (operation)
        {
            case '+':
            {
                const int correctResult { (intA + intB) };
                if (correctResult == result)
                {
                    std::cout << "Congratulations! You got the result " << result << " right!" << std::endl;
                    std::cout << std::endl;

                    std::cout << "Do you want me to try again? (Y | N ):";
                    std::cin >> input;

                    if ((input == 'Y') || (input == 'y'))
                    {
                        end = false;
                    }
                    else if ((input == 'N') || (input == 'n'))
                    {
                        end = true;
                    }
                    else
                    {
                        end = true;
                    }
                }
                else
                {
                    std::cout << "Naah! The correct result is: " << correctResult << std::endl;
                    std::cout << std::endl;

                    std::cout << "Do you want me to try again? (Y | N ):";
                    std::cin >> input;

                    if ((input == 'Y') || (input == 'y'))
                    {
                        end = false;
                    }
                    else if ((input == 'N') || (input == 'n'))
                    {
                        end = true;
                    }
                    else
                    {
                        end = true;
                    }
                }
            }
            break;
            case '-':
            {
                const int correctResult { (intA - intB) };
                if (correctResult == result)
                {
                    std::cout << "Congratulations! You got the result " << result << " right!" << std::endl;
                    std::cout << std::endl;

                    std::cout << "Do you want me to try again? (Y | N ):";
                    std::cin >> input;

                    if ((input == 'Y') || (input == 'y'))
                    {
                        end = false;
                    }
                    else if ((input == 'N') || (input == 'n'))
                    {
                        end = true;
                    }
                    else
                    {
                        end = true;
                    }
                }
                else
                {
                    std::cout << "Naah! The correct result is: " << correctResult << std::endl;
                    std::cout << std::endl;

                    std::cout << "Do you want me to try again? (Y | N ):";
                    std::cin >> input;

                    if ((input == 'Y') || (input == 'y'))
                    {
                        end = false;
                    }
                    else if ((input == 'N') || (input == 'n'))
                    {
                        end = true;
                    }
                    else
                    {
                        end = true;
                    }
                }
            }
            break;
            case '*':
            {
                const int correctResult { (intA * intB) };
                if (correctResult == result)
                {
                    std::cout << "Congratulations! You got the result " << result << " right!" << std::endl;
                    std::cout << std::endl;

                    std::cout << "Do you want me to try again? (Y | N ):";
                    std::cin >> input;

                    if ((input == 'Y') || (input == 'y'))
                    {
                        end = false;
                    }
                    else if ((input == 'N') || (input == 'n'))
                    {
                        end = true;
                    }
                    else
                    {
                        end = true;
                    }
                }
                else
                {
                    std::cout << "Naah! The correct result is: " << correctResult << std::endl;
                    std::cout << std::endl;

                    std::cout << "Do you want me to try again? (Y | N ):";
                    std::cin >> input;

                    if ((input == 'Y') || (input == 'y'))
                    {
                        end = false;
                    }
                    else if ((input == 'N') || (input == 'n'))
                    {
                        end = true;
                    }
                    else
                    {
                        end = true;
                    }
                }
            }
            break;
            default:
            {
                std::cout << "Unknown operation" << std::endl;
                end = true;
            }
            break;
        }
    }

    std::cout << "See you later!" << std::endl;

    return 0;
}