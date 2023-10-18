#include <iostream>

#include <string>
#include <concepts>

template <typename T, typename P>
    requires std::is_integral_v<T>
&& std::same_as<P, std::string>
struct Map
{
private:
    friend std::ostream& operator<<(std::ostream& out, const Map<T, P>& operand);
    T m_key;
    P m_value;
public:
    Map(T key, P value)
        : m_key(key), m_value(value)
    {
    }
};


template < typename T, typename P>
std::ostream& operator<<(std::ostream& out, const Map<T, P>& operand)
{

    out << "Map : [" << operand.m_key
        << "," << operand.m_value << "]";
    return out;
}

int main()
{
    Map<int, std::string> m1(11222, std::string { "Steve Murphy" }); // Works
    Map<long int, std::string> m2(22333, "Ahmed Malik"); // Works

    //Map<double, unsigned int> m3(22.1, 44555);
    return 0;
}