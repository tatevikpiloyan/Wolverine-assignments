#include <iostream>
#include <string>

std::size_t lastIndexOf(const std::string& s, const std::string& t) 
{
    
    std::size_t pos = s.find(t);
    while (s.find(t, pos + t.size()) != std::string::npos)
    {
        pos = s.find(t, pos + t.size());
    }
    return pos;
}

int main()
{
    std::string str = "Hello, i said Hello";
    std::string sub = "Hell";
    std::cout << lastIndexOf(str, sub) << std::endl;
}