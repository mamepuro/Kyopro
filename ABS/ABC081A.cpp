#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int count = 0;
    count = (a % 10);
    if (a % 100 >= 10)
    {
        count++;
    }
    if (a >= 100)
    {
        count++;
    }
    std::cout << count << std::endl;
}