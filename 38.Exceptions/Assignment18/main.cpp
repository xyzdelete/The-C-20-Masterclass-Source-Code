#include <iostream>
#include <exception>
#include <fstream>
#include <string_view>

class FileError final : public std::exception
{
public:
    FileError() noexcept = default;
    ~FileError() noexcept = default;
    FileError(const FileError&) noexcept = default;
    FileError(FileError&&) noexcept = default;

    FileError(const std::string_view errorMessage)
        : m_errorMessage { errorMessage }
    {

    }
    virtual char const* what() const noexcept override final
    {
        return m_errorMessage.data();
    }
private:
    std::string m_errorMessage {};
};

void read_from_file(std::string_view filename, int(&data)[]) noexcept
{
    std::ifstream fstrem_in { filename.data() }; // We may fail to open the file

    try
    {
        //We failed to open the file
        if (fstrem_in.fail())
        {
            // We failed to open the file: throw an exception.
            using namespace std::literals::string_literals;
            throw FileError("Unable to open file "s + filename.data());
        }


        int value;
        int index {};
        while (fstrem_in >> value)
        {
            data[index++] = value;
        }
        //Something might go wrong in the process of reading the file.

        if (!fstrem_in.eof())
        {
            using namespace std::literals::string_literals;
            throw FileError("Something might go wrong in the process of reading the file "s + filename.data());
        }
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what();
    }
}

int main()
{
    int data[4] {};
    read_from_file("numbers.txt", data);
    for (auto i : data)
    {
        std::cout << "value : " << i << std::endl;
    }
}