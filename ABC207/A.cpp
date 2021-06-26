#include <iostream>
#include <algorithm>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    int ab, bc, ca;
    ab = a + b;
    bc = b + c;
    ca = c + a;
    std::cout << std::max({ab, bc, ca}) << std::endl;
}