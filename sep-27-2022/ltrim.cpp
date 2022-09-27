#include <iostream>

std::string ltrim(const std::string&);

int main()
{
	std::string str;
	getline(std::cin, str);
	std::cout << ltrim(str) << std::endl;
}

std::string ltrim(const std::string& str)
{
	std::string nstr;
	for (int i = 0; i < str.size(); ++i)
	{
		if ((str[i] == ' ') && nstr.empty())
		{
			continue;
		}
		nstr.push_back(str[i]);
	}
	return nstr;
}
