#include <iostream>

int main()
{
    int a, b, c, x;
    int count = 0;
    bool isSkippable = false;
    std::cin >> a >> b >> c >> x;
    for (int coin500 = 0; coin500 <= a; coin500++)
    {
        isSkippable = false;
        if (500 * coin500 > x)
        {
            continue;
        }
        int tmpSumStep1 = 500 * coin500;
        for (int coin100 = 0; coin100 <= b; coin100++)
        {
            int tmpSumStep2 = tmpSumStep1 + (100 * coin100);
            if (tmpSumStep2 > x)
            {
                break;
            }

            for (int coins50 = 0; coins50 <= c; coins50++)
            {
                int tmpSumStep3 = tmpSumStep2 + coins50 * 50;
                if (tmpSumStep3 > x)
                {
                    break;
                }
                if (tmpSumStep3 == x)
                {
                    count++;
                }
            }
        }
    }
    std::cout << count << std::endl;
}