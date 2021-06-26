#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

int main()
{
    int n;
    std::vector<long> T(n);
    std::vector<long> Left(n);
    std::vector<long> Right(n);
    int ans = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> T[i];
        std::cin >> Left[i];
        std::cin >> Right[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int left_edge;
            int right_edge;
            if (Left[i] < Left[j])
            {
                //左端はjとする
                left_edge = j;
            }
            else
            {
                //範囲の左端参照先はiとなる
                left_edge = i;
            }
            if (Right[i] < Right[j])
            {
                right_edge = i;
            }
            else
            {
                right_edge = j;
            }
            if ((T[left_edge] == 3) || (T[right_edge] == 4) || (T[right_edge] == 2) || (T[left_edge] == 4))
            {
                if (Left[left_edge] < Right[right_edge])
                {
                    ans++;
                }
            }
            else
            {
                if (Left[left_edge] <= Right[right_edge])
                {
                    ans++;
                }
            }
        }
    }
    std::cout << ans << std::endl;
}