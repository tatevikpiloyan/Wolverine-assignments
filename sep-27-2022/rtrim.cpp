#include <iostream>

std::string rtrim(std::string&);

int main()
{
	std::string str;
	getline(std::cin, str);
	std::cout << rtrim(str) << std::endl;
}

std::string rtrim(std::string& str)
{
	int count = 0;
	for (int i = str.size() - 1; i >= 0; --i)
	{
		if (str[i] == ' ')
		{
			++count;
		}
		else
		{
			break;
		}
	}
	str.erase(str.size() - count, count);
	return str;
}
