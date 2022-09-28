#include <iostream>

void memcpy(void* src, void* dest, size_t n);

int main()
{
    char arr[] = "hello";
    char arr2[6];
    memcpy(arr, arr2, 6);
    std::cout << arr2; //hello\0
}

void memcpy(void* src, void* dest, size_t count)
{
    int i = 0;
    while (i < count)
    {
        *((char*)dest + i) = *((char*)src +i);
        ++i;
    }
}