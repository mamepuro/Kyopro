#include <iostream>
#include <algorithm>
#include <numbers>
#include <math.h>
#include <vector>

int main()
{
    int n;
    std::vector<long> Xa(n);
    std::vector<long> Xc(n);
    std::vector<long> Yb(n);
    std::vector<long> Yd(n);
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> Xa[i] >> Yb[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> Xc[i] >> Yd[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::vector<long> X(n);
        std::vector<long> Y(n);
        for (int j = 0; j < n; j++)
        {
            for (int degree = 0; degree < 360; degree++)
            {
                for (int k = 0; k < n; k++)
                {
                    X[k] = Xa[k] * cos((float)(k / 180) * std::numbers::pi_v<float>)
                }
            }
        }
    }
}