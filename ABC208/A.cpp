#include <iostream>
#include <algorithm>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a <= b && b <= 6 * a)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}