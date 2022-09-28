#include <iostream>

void memset(void*, char val, size_t count);

int main()
{
    char arr[10];
    memset(arr, '~', 4);
    std::cout << arr << std::endl;
}

void memset(void* str, char val, size_t count)
{
    int i = 0;
    while (i < count)
    {
         *((char*)str + i) = val;
         ++i;
    }
    *((char*)str + i) = '\0';
}