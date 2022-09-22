#include <iostream>

int main()
{
	int iter;
	std::cout << "Please enter a number: ";
	std::cin >> iter;
	int num = 0;
iteration:
	std::cout << num << std::endl;
	++num;
	if (num <= iter)
		goto iteration;
}
