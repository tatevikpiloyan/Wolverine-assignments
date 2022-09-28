#include <iostream>
std::string replaceAll(std::string&, const std::string&, const std::string&);

int main()
{
    std::string str;
    std::string sub;
    std::string rep;
    std::cout << "Please enter a string!" << std::endl;
    getline(std::cin, str);
    std::cout << "Please enter substring to replace!" << std::endl;
    getline(std::cin, sub);
    std::cout << "Please enter substring" << std::endl;
    getline(std::cin, rep);
    std::cout << replaceAll(str, sub, rep) << std::endl;
}

std::string replaceAll(std::string& str, const std::string& sub, const std::string& rep)
{
    int pos = 0;
    while ((pos = str.find(sub)) != -1)
    {
        str.replace(pos, sub.size(), rep);
    }
    return str;
}