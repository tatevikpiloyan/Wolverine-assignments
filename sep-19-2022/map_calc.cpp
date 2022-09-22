#include <iostream>
#include <map>

int my_sum(int, int);
int my_sub(int, int);
int my_mul(int, int);
int my_div(int, int);

int main()
{
	char ch;
	std::cout << "Please enter arithmetic operation!" << std::endl;
	std::cin >> ch;
	int num1;
	int num2;
	std::cout << "Please enter two numbers to operate!" << std::endl;
	std::cin >> num1 >> num2;
	std::map<char, int(*)(int, int)> result;
	result.insert(std::make_pair('+', my_sum));
	result.insert(std::make_pair('-', my_sub));
	result.insert(std::make_pair('*', my_mul));
	result.insert(std::make_pair('/', my_div));
	auto ptr = result[ch];
	if (ptr)
		std::cout << ptr(num1, num2) << std::endl;
	else
		std::cout << "Wrong operation!" << std::endl;
}

int my_sum(int a, int b)
{
	return a + b;
}

int my_sub(int a, int b)
{
	return a - b;
}

int my_mul(int a, int b)
{
	return a * b;
}

int my_div(int a, int b)
{
	return a / b;
}
