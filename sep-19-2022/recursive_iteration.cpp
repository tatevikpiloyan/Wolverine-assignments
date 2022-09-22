#include <iostream>

void no_iter(int);

int main()
{
	int i;
	std::cout << "Please enter a number: ";
	std::cin >> i;
	no_iter(i);
}

void no_iter(int i)
{
	if (i < 0)
	{
		return;
	}
	no_iter(i - 1);
	std::cout << i << std::endl;
}
