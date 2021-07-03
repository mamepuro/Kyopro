#include <iostream>

int CalcDigits(int input)
{
    int digits = 0;
    while (input != 0)
    {
        input /= 10;
        digits++;
    }
    return digits;
}

int GetSumOfEachDigits(int n)
{
    int digits = CalcDigits(n);
    int ret = 0;
    switch (digits)
    {
    case 1:
        ret = n;
        break;
    case 2:
        ret = (n % 10) + (n / 10);
        break;
    case 3:
        ret = (n / 100) + (n % 10) + ((n % 100 - (n % 10)) / 10);
        break;
    case 4:
    {
        int d2 = ((n % 100 - (n % 10)) / 10);
        int d3 = ((n % 1000 - (n % 100)) / 100);
        ret = (n / 1000) + (n % 10) + d2 + d3;
        break;
    }
    default:
        break;
    }
    return ret;
}
int GetAnswer(int max, int under, int upper)
{
    int count = 0;
    for (int i = 1; i <= max; i++)
    {
        int sum = GetSumOfEachDigits(i);
        if (under <= sum && sum <= upper)
        {
            count += i;
        }
    }
    return count;
}

int main()
{
    int n, a, b;
    int count = 0;
    std::cin >> n >> a >> b;
    count = GetAnswer(n, a, b);
    std::cout << count << std::endl;
}