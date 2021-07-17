#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int CalcDigits(long long n)
{
    int digits = 0;
    while (n != 0)
    {
        n /= 10;
        digits++;
    }
    return digits;
}

int main()
{
    long long n;
    long long k;
    std::cin >> n >> k;
    long long product = 1;
}