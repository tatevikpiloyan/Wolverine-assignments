#include <iostream>

std::string toLowerCase(std::string&);

int main()
{
    std::string str;
    std::cout << "Please enter a string!" << std::endl;
    getline(std::cin, str);
    std::cout << toLowerCase(str);
}

std::string toLowerCase(std::string& str)
{
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    return str;
}