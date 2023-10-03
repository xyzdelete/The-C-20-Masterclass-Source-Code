#pragma once
#include <iostream>

struct Point
{
    Point(double x, double y) : m_x(x), m_y(y) {}
    Point(double x) : Point(x, x) {}
    ~Point()
    {

    }

    auto operator<=>(const Point&) const = default;

    double m_x {};
    double m_y {};
};

int main()
{
    Point p1(1, 1);
    Point p2(2, 2);

    std::cout << std::endl;
    std::cout << "p1 > p2 : " << (p1 > p2) << std::endl;
    std::cout << "p1 > p2 : " << (p1 > 2) << std::endl; // Implicit conversion from left
    std::cout << "p1 > p2 : " << (1 > p2) << std::endl; // Implicit conversion from right

    std::cout << std::endl;
    std::cout << "p1 < p2 : " << (p1 < p2) << std::endl;
    std::cout << "p1 < p2 : " << (p1 < 2) << std::endl; // Implicit conversion from left
    std::cout << "p1 < p2 : " << (1 < p2) << std::endl; // Implicit conversion from right

    std::cout << std::endl;
    std::cout << "p1 >= p2 : " << (p1 >= p2) << std::endl;
    std::cout << "p1 >= p2 : " << (p1 >= 2) << std::endl; // Implicit conversion from left
    std::cout << "p1 >= p2 : " << (1 >= p2) << std::endl; // Implicit conversion from right

    std::cout << std::endl;
    std::cout << "p1 <= p2 : " << (p1 <= p2) << std::endl;
    std::cout << "p1 <= p2 : " << (p1 <= 2) << std::endl; // Implicit conversion from left
    std::cout << "p1 <= p2 : " << (1 <= p2) << std::endl; // Implicit conversion from right

    std::cout << std::endl;
    std::cout << "p1 == p2 : " << (p1 == p2) << std::endl;
    std::cout << "p1 == p2 : " << (p1 == 2) << std::endl; // Implicit conversion from left
    std::cout << "p1 == p2 : " << (1 == p2) << std::endl; // Implicit conversion from right

    std::cout << std::endl;
    std::cout << "p1 != p2 : " << (p1 != p2) << std::endl;
    std::cout << "p1 != p2 : " << (p1 != 2) << std::endl; // Implicit conversion from left
    std::cout << "p1 != p2 : " << (1 != p2) << std::endl; // Implicit conversion from right

    return 0;
}