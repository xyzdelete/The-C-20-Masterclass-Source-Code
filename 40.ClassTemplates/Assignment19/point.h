#pragma once
#include <iostream>

template <typename T = int, unsigned int size = 2>
class Point
{
    T m_components[size];
public:
    unsigned int get_size() const
    {
        return size;
    }
    void set_value(unsigned int index, T value)
    {
        m_components[index] = value;
    }

    friend std::ostream& operator<< <>(std::ostream& out, const Point<T, size>& point);
};


template<typename T, unsigned int size>
std::ostream& operator<<(std::ostream& out, const Point<T, size>& point)
{
    out << "Point : [ " << "dimension : " << size << ", components : ";
    for (std::size_t i {}; i < size; i++)
    {
        out << point.m_components[i] << " ";
    }
    out << "]";
    return out;
}