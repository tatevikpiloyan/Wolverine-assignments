#include <iostream>

bool endsWith(const std::string&, const std::string&);

int main()
{
    std::string str;
    std::string sub;
    std::cout << "Please enter a string!" << std::endl;
    getline(std::cin, str);
    std::cout << "Please enter substring!" << std::endl;
    getline(std::cin, sub);
    std::cout << std::boolalpha << endsWith(str, sub) << std::endl;
}

bool endsWith(const std::string& str, const std::string& sub)
{
    for (int i = sub.size() - 1, j = str.size() - 1; i >= 0; --i, --j)
    {
        if (str[j] != sub[i])
        {
            return false;
        }
    }
    return true;
}