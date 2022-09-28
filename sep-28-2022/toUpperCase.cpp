#include <iostream>

std::string toUpperCase(std::string&);

int main()
{
    std::string str;
    std::cout << "Please enter a string!" << std::endl;
    getline(std::cin, str);
    std::cout << toUpperCase(str);
}

std::string toUpperCase(std::string& str)
{
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    return str;
}