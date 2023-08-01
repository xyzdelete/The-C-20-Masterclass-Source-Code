#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter a year: " << std::endl;
    size_t year { };
    std::cin >> year;
    std::cout << "Enter the first day of the year [1: Monday, ... , 7: Sunday]:" << std::endl;
    size_t yearFirstDay;
    std::cin >> yearFirstDay;
    std::cout << "Calendar for " << year << std::endl;

    constexpr size_t January { 0 };
    constexpr size_t February { 1 };
    constexpr size_t March { 2 };
    constexpr size_t April { 3 };
    constexpr size_t May { 4 };
    constexpr size_t June { 5 };
    constexpr size_t July { 6 };
    constexpr size_t August { 7 };
    constexpr size_t September { 8 };
    constexpr size_t October { 9 };
    constexpr size_t November { 10 };
    constexpr size_t December { 11 };

    constexpr size_t Monday { 0 };
    constexpr size_t Tuesday { 1 };
    constexpr size_t Wednesday { 2 };
    constexpr size_t Thursday { 3 };
    constexpr size_t Friday { 4 };
    constexpr size_t Saturday { 5 };
    constexpr size_t Sunday { 6 };

    constexpr size_t Months[] {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    constexpr size_t daysUsualYear[] {
        31, // January
        28, // February (28 days and 29 in every leap year)
        31, // March
        30, // April
        31, // May
        30, // June
        31, // July
        31, // August
        30, // September
        31, // October
        30, // November
        31  // December
    };

    constexpr size_t daysLeapYear[] {
        31, // January
        29, // February (28 days and 29 in every leap year)
        31, // March
        30, // April
        31, // May
        30, // June
        31, // July
        31, // August
        30, // September
        31, // October
        30, // November
        31  // December
    };

    constexpr size_t weekDays[] {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    constexpr size_t Width { 7 };
    constexpr size_t daysInWeek { 7 };

    size_t delta { };
    size_t fullWeekCounter { 1 };

    for (const auto month : Months)
    {
        switch (month)
        {
            case January:
            {
                std::cout << "-- January " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = yearFirstDay - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[January]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek - delta)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case February:
            {
                std::cout << "-- February " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                // The year must be evenly divisible by 4;
                if ((year % 4) == 0)
                {
                    // If the year can also be evenly divided by 100, it is not a leap year;
                    if ((year % 100) == 0)
                    {
                        // Check if the year can be divided by 400 without a remainder. If it cannot, then it is not a leap year.
                        if ((year % 400) == 0)
                        {
                            // Logic for a leap year
                            size_t week { };

                            for (size_t day { }; day < daysLeapYear[February]; day++)
                            {
                                if (week == 0)
                                {
                                    std::cout << std::right << std::setw(Width) << day + 1;
                                    if ((fullWeekCounter % (daysInWeek)) == 0)
                                    {
                                        std::cout << std::endl;
                                        // Reset full week counter
                                        fullWeekCounter = 0;
                                    }
                                    else
                                    {
                                        fullWeekCounter++;
                                        continue;
                                    }
                                    week++;
                                    fullWeekCounter++;
                                    continue;
                                }

                                std::cout << std::right << std::setw(Width) << day + 1;
                                if ((fullWeekCounter % (daysInWeek)) == 0)
                                {
                                    std::cout << std::endl;
                                    fullWeekCounter = 0;
                                }
                                fullWeekCounter++;
                            }
                        }
                        else
                        {
                            // Logic for a usual year
                            size_t week { };

                            for (size_t day { }; day < daysUsualYear[February]; day++)
                            {
                                if (week == 0)
                                {
                                    std::cout << std::right << std::setw(Width) << day + 1;
                                    if ((fullWeekCounter % (daysInWeek)) == 0)
                                    {
                                        std::cout << std::endl;
                                        // Reset full week counter
                                        fullWeekCounter = 0;
                                    }
                                    else
                                    {
                                        fullWeekCounter++;
                                        continue;
                                    }
                                    week++;
                                    fullWeekCounter++;
                                    continue;
                                }

                                std::cout << std::right << std::setw(Width) << day + 1;
                                if ((fullWeekCounter % (daysInWeek)) == 0)
                                {
                                    std::cout << std::endl;
                                    fullWeekCounter = 0;
                                }
                                fullWeekCounter++;
                            }
                        }
                    }
                    else
                    {
                        // Logic for a leap year
                        size_t week { };

                        for (size_t day { }; day < daysLeapYear[February]; day++)
                        {
                            if (week == 0)
                            {
                                std::cout << std::right << std::setw(Width) << day + 1;
                                if ((fullWeekCounter % (daysInWeek)) == 0)
                                {
                                    std::cout << std::endl;
                                    // Reset full week counter
                                    fullWeekCounter = 0;
                                }
                                else
                                {
                                    fullWeekCounter++;
                                    continue;
                                }
                                week++;
                                fullWeekCounter++;
                                continue;
                            }

                            std::cout << std::right << std::setw(Width) << day + 1;
                            if ((fullWeekCounter % (daysInWeek)) == 0)
                            {
                                std::cout << std::endl;
                                fullWeekCounter = 0;
                            }
                            fullWeekCounter++;
                        }
                    }

                }
                else
                {
                    // Logic for a usual year
                    size_t week { };

                    for (size_t day { }; day < daysUsualYear[February]; day++)
                    {
                        if (week == 0)
                        {
                            std::cout << std::right << std::setw(Width) << day + 1;
                            if ((fullWeekCounter % (daysInWeek)) == 0)
                            {
                                std::cout << std::endl;
                                // Reset full week counter
                                fullWeekCounter = 0;
                            }
                            else
                            {
                                fullWeekCounter++;
                                continue;
                            }
                            week++;
                            fullWeekCounter++;
                            continue;
                        }

                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            fullWeekCounter = 0;
                        }
                        fullWeekCounter++;
                    }
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case March:
            {
                std::cout << "-- March " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[March]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case April:
            {
                std::cout << "-- April " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[April]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case May:
            {
                std::cout << "-- May " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[May]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case June:
            {
                std::cout << "-- June " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[June]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case July:
            {
                std::cout << "-- July " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[July]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case August:
            {
                std::cout << "-- August " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[August]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case September:
            {
                std::cout << "-- September " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[September]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case October:
            {
                std::cout << "-- October " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[October]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case November:
            {
                std::cout << "-- November " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[November]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            case December:
            {
                std::cout << "-- December " << year << " --" << std::endl;
                std::cout
                    << std::right << std::setw(Width) << "Mon"
                    << std::right << std::setw(Width) << "Tue"
                    << std::right << std::setw(Width) << "Wed"
                    << std::right << std::setw(Width) << "Thu"
                    << std::right << std::setw(Width) << "Fri"
                    << std::right << std::setw(Width) << "Sat"
                    << std::right << std::setw(Width) << "Sun"
                    << std::right << std::endl;

                delta = fullWeekCounter - 1;
                for (size_t i { }; i < delta * Width; i++)
                {
                    std::cout << " ";
                }

                size_t week { };

                for (size_t day { }; day < daysUsualYear[December]; day++)
                {
                    if (week == 0)
                    {
                        std::cout << std::right << std::setw(Width) << day + 1;
                        if ((fullWeekCounter % (daysInWeek)) == 0)
                        {
                            std::cout << std::endl;
                            // Reset full week counter
                            fullWeekCounter = 0;
                        }
                        else
                        {
                            fullWeekCounter++;
                            continue;
                        }
                        week++;
                        fullWeekCounter++;
                        continue;
                    }

                    std::cout << std::right << std::setw(Width) << day + 1;
                    if ((fullWeekCounter % (daysInWeek)) == 0)
                    {
                        std::cout << std::endl;
                        fullWeekCounter = 0;
                    }
                    fullWeekCounter++;
                }
                std::cout << std::endl;
                std::cout << std::endl;
            }
            break;
            default:
            {
                std::cout << "Incorrect month" << std::endl;
            }
            break;
        }
    }

    return 0;
}