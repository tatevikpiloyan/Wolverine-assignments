#include <iostream>
#include <map>
#include <string>

enum class Colors {Red, Green, Blue, Black, Yellow};
std::map<Colors, std::string> stringValue = {{Colors::Red, "Red"}, {Colors::Green, "Green"}, {Colors::Blue, "Blue"}, {Colors::Black, "Black"}, {Colors::Yellow, "Yellow"}};
std::map<std::string, Colors> enumValue = {{"Red", Colors::Red}, {"Green", Colors::Green}, {"Blue", Colors::Blue}, {"Black", Colors::Black}, {"Yellow", Colors::Yellow}};

std::ostream& operator<<(std::ostream&, Colors);

std::string toString(Colors);
Colors toEnum(std::string);

int main()
{
    Colors s = Colors::Black;
    std::string str = "Blue";
    std::cout << toString(s) << std::endl;
    std::cout << toEnum(str) << std::endl;
}

std::ostream& operator<<(std::ostream& os, Colors c)
{
    os << toString(c);
    return os;
}

std::string toString(Colors c)
{
    if (stringValue.find(c) != stringValue.end())
    {
        return stringValue[c];
    }
    std::cout << "No such string!" << std::endl;
    exit(1);
}

Colors toEnum(std::string str)
{
    if (enumValue.find(str) != enumValue.end())
    {
        return enumValue[str];
    }
    std::cout << "No such enum!" << std::endl;
    exit(1);
}