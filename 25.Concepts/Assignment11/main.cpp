#include <iostream>
#include <string>

template<typename T1, typename T2>
concept ConvertibleToStdString = requires (T1 num1, T2 num2)
{
    std::to_string(num1);
    std::to_string(num2);
};

template<typename T1, typename T2>
auto concatenate(T1 num1, T2 num2) requires ConvertibleToStdString<T1, T2>
{
    return std::to_string(num1) + std::to_string(num2);
}

int main()
{
    auto result = concatenate(22.22, 33.33);
    std::cout << "result : " << result << std::endl;

    return 0;
}