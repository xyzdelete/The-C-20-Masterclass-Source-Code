#include <iostream>
#include <string>

template <typename T1>
concept ConvertibleToStdString1 = requires(T1 n)
{
    std::to_string(n);
};

template <typename T2>
concept ConvertibleToStdString2 = requires(T2 n)
{
    std::to_string(n);
};

template <typename T1, typename T2>
    requires ConvertibleToStdString1<T1>
&& ConvertibleToStdString2<T2>
auto concatenate(const T1   n1, const T2  n2)
{
    return std::to_string(n1) + std::to_string(n2);
}

int main()
{
    auto result = concatenate(11, 22.22);
    std::cout << "result : " << result << std::endl;

    return 0;
}