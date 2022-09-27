#include <iostream>

std::string trim(std::string&);

int main()
{
	std::string str;
	getline(std::cin, str);
	std::cout << trim(str) << "||||||||" << std::endl;

}

std::string trim(std::string& str)
{
	int l_count;
	int r_count;
	int size = str.size();
	for (int i = size - 1; i >= 0; --i)
	{
		if (str[i] == ' ')
		{
			++r_count;
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < size; ++i)
	{
		if (str[i] == ' ')
		{
			++l_count;
		}
		else
		{
			break;
		}
	}
	str.erase(str.size() - r_count, r_count);
	str.erase(0, l_count);
	return str;
}
