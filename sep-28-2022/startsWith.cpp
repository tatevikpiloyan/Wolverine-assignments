#include <iostream>

bool startsWith(const std::string&, const std::string&);

int main()
{
    std::string str;
    std::string sub;
    std::cout << "Please enter a string!" << std::endl;
    getline(std::cin, str);
    std::cout << "Please enter substring!" << std::endl;
    getline(std::cin, sub);
    std::cout << std::boolalpha << startsWith(str, sub) << std::endl;

}

bool startsWith(const std::string& str, const std::string& sub)
{
    for (int i = 0; i < sub.size(); ++i)
    {
        if (str[i] != sub[i])
        {
            return false;
        }
    }
    return true;
}