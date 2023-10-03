#pragma once

struct Point
{
    Point(double x, double y) : m_x(x), m_y(y) {}
    ~Point()
    {
    }

    bool operator==(const Point&) const = default;

    double m_x {};
    double m_y {};
};