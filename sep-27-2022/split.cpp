#include <iostream>
#include <vector>

std::vector<std::string> split(const std::string&, std::string&);

int main()
{
	std::string str;
	std::string spliter;
	std::cout << "Please enter a string!" << std::endl;
	getline(std::cin, str);
	std::cout << "Please enter spliters!" << std::endl;
	getline(std::cin, spliter);
	std::vector<std::string> vec;
	vec  = split(str, spliter);
	for (auto& i : vec)
	{
		std::cout << i << ' ' << std::endl;
	}
}

std::vector<std::string> split(const std::string& str, std::string& spliter)
{
	std::vector<std::string> nstr;
	std::string tstr;
	for (int i = 0; i < str.size(); ++i)
	{
		if (spliter.find(str[i]) != -1)
		{
			if (tstr != "")
            {
			    nstr.push_back(tstr);
			    tstr.clear();
			    continue;
            }
            continue;
		}
		tstr.push_back(str[i]);
	}
	nstr.push_back(tstr);
	return nstr;
}
