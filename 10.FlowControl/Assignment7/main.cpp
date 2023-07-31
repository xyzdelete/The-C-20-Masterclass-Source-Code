#include <iostream>

int main()
{
    size_t day { };

    std::cout << "Which day is today [1: Monday, ... , 7: Sunday] :" << std::endl;
    std::cin >> day;

    if (!((day >= 1) && (day <= 7)))
    {
        std::cout << day << " is not a valid day. Bye!" << std::endl;
        return 0;
    }

    size_t actualDay { };
    constexpr size_t daysInWeek { 7 };

    size_t daysPassed { };
    std::cout << "How many days have passed up to today:" << std::endl;
    std::cin >> daysPassed;

    size_t daysRemains = daysPassed % 7;

    switch (day)
    {
        case 1:
        {
            std::cout << "Today is Monday." << std::endl;
            std::cout << "If we went " << daysPassed << " days in the past we would hit a ";

            if (daysRemains == 0)
            {
                actualDay = 1;
            }
            else
            {
                if (daysRemains > 1)
                {
                    const size_t dif = daysRemains - 1;
                    actualDay = 7 - dif;
                }
                else
                {
                    actualDay = 1 - daysRemains;

                }

            }
        }
        break;
        case 2:
        {
            std::cout << "Today is Tuesday." << std::endl;
            std::cout << "If we went " << daysPassed << " days in the past we would hit a ";
            if (daysRemains == 0)
            {
                actualDay = 2;
            }
            else
            {
                if (daysRemains > 2)
                {
                    const size_t dif = daysRemains - 2;
                    actualDay = 7 - dif;
                }
                else
                {
                    actualDay = 2 - daysRemains;

                }

            }
        }
        break;
        case 3:
        {
            std::cout << "Today is Wednesday." << std::endl;
            std::cout << "If we went " << daysPassed << " days in the past we would hit a ";
            if (daysRemains == 0)
            {
                actualDay = 3;
            }
            else
            {
                if (daysRemains > 3)
                {
                    const size_t dif = daysRemains - 3;
                    actualDay = 7 - dif;
                }
                else
                {
                    actualDay = 3 - daysRemains;

                }

            }
        }
        break;
        case 4:
        {
            std::cout << "Today is Thursday." << std::endl;
            std::cout << "If we went " << daysPassed << " days in the past we would hit a ";
            if (daysRemains == 0)
            {
                actualDay = 4;
            }
            else
            {
                if (daysRemains > 4)
                {
                    const size_t dif = daysRemains - 4;
                    actualDay = 7 - dif;
                }
                else
                {
                    actualDay = 4 - daysRemains;
                }

            }
        }
        break;
        case 5:
        {
            std::cout << "Today is Friday." << std::endl;
            std::cout << "If we went " << daysPassed << " days in the past we would hit a ";
            if (daysRemains == 0)
            {
                actualDay = 5;
            }
            else
            {
                if (daysRemains > 5)
                {
                    const size_t dif = daysRemains - 5;
                    actualDay = 7 - dif;
                }
                else
                {
                    actualDay = 5 - daysRemains;
                }

            }
        }
        break;
        case 6:
        {
            std::cout << "Today is Saturday." << std::endl;
            std::cout << "If we went " << daysPassed << " days in the past we would hit a ";
            if (daysRemains == 0)
            {
                actualDay = 6;
            }
            else
            {
                if (daysRemains > 6)
                {
                    const size_t dif = daysRemains - 6;
                    actualDay = 7 - dif;
                }
                else
                {
                    actualDay = 6 - daysRemains;

                }

            }
        }
        break;
        case 7:
        {
            std::cout << "Today is Sunday." << std::endl;
            std::cout << "If we went " << daysPassed << " days in the past we would hit a ";

            if (daysRemains == 0)
            {
                actualDay = 7;
            }
            else
            {
                actualDay = 7 - daysRemains;
            }
        }
        break;
        default:
        {
            std::cout << day << " is not a valid day. Bye!" << std::endl;
        }
        break;

    }

    if (actualDay == 0)
    {
        actualDay = 7;
    }

    switch (actualDay)
    {
        case 1:
        {
            std::cout << "Monday" << std::endl;

        }
        break;
        case 2:
        {
            std::cout << "Tuesday" << std::endl;
        }
        break;
        case 3:
        {
            std::cout << "Wednesday" << std::endl;
        }
        break;
        case 4:
        {
            std::cout << "Thursday." << std::endl;
        }
        break;
        case 5:
        {
            std::cout << "Friday" << std::endl;
        }
        break;
        case 6:
        {
            std::cout << "Saturday" << std::endl;
        }
        break;
        case 7:
        {
            std::cout << "Sunday" << std::endl;
        }
        break;
        default:
        {
            std::cout << day << " is not a valid day. Bye!" << std::endl;
        }
        break;
    }

    return 0;
}