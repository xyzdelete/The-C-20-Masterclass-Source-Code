#include <type_traits>
#include <string>

template <typename T, typename P>
struct Map
{
    static_assert(std::is_integral<T>::value == true, "Values can only be of std::string type");
    static_assert(std::is_integral<P>::value == false, "Values can only be of std::string type");
private:
    T m_key;
    P m_value;
public:
    Map(T key, P value)
        : m_key(key), m_value(value)
    {
    }
};

int main()
{
    Map<int, std::string> m1(11222, std::string { "Steve Murphy" });
    Map<long int, std::string> m2(22333, "Ahmed Malik");

    //Map<double, unsigned int> m3(22.1, 44555);
    return 0;
}