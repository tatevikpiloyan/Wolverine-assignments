#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string&, std::string&);

int main()
{
    std::ifstream fIn;
    std::ofstream fOut;
    std::string iLine = {};
    std::string oLine = {};
    std::string spliters = {", '\n''\t"};
    fIn.open("test.fasm");
    fOut.open("test.out");
    if (!fIn.is_open())
    {
        std::cout << "Failed to open input file!" << std::endl;
        exit(1);
    }
    if (!fOut.is_open())
    {
        std::cout << "Failed to open output file!" << std::endl;
        exit(2);
    }
    while (!fIn.eof())
    {
        getline(fIn, iLine);
        std::vector<std::string> tmp = split(iLine, spliters);
        for (auto i : tmp)
        {
            oLine += i;
            fOut << oLine << '\n';
            oLine.clear();
        }
    }
}

std::vector<std::string> split(const std::string& str, std::string& spliter)
{
	std::vector<std::string> nstr = {};
	std::string tstr = {};
	for (int i = 0; i < str.size(); ++i)
	{
		if (spliter.find(str[i]) != std::string::npos)
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