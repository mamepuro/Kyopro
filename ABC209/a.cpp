#include <iostream>
#include <algorithm>

int main()
{
    int n, a, x, y;
    std::cin >> n >> a >> x >> y;
    int count = 1;
    int price = 0;
    if(n >= a)
    {
        int tmp = n-a;
        price += a*x;
        n = tmp;
    }
    else
    {
        price += n*x;
        n=-1;
    }
    if(n != -1)
    {
        price += n*y;
    }
    
    std::cout << price << std::endl;
}