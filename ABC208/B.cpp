#include <iostream>
#include <vector>
#include <algorithm>

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int p;
    std::cin >> p;
    int count = 0;
    std::vector<int> coins(10);
    for (int i = 0; i < 10; i++)
    {
        coins[i] = fact(i + 1);
    }
    for (int i = 9; i >= 0; i--)
    {
        while (p >= coins[i])
        {
            p -= coins[i];
            count++;
        }
    }
    std::cout << count << std::endl;
}