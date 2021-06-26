#include <iostream>
#include <algorithm>
#include <math.h>

int main()
{
    int a, b, c, d;
    // ans = (-a)/(b-cd)の天井関数の返り値
    int ans;
    std::cin >> a >> b >> c >> d;
    //a=0ならN=0で答えになる
    if (a == 0)
    {
        ans = 0;
    }
    else if ((b - c * d) == 0)
    {
        ans = -1;
    }
    else
    {
        float n = -a / (float)(b - c * d);
        ans = (int)ceil(n);
        if (ans < 0)
        {
            ans = -1;
        }
    }
    std::cout << ans << std::endl;
}