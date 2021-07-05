#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    int n;
    long long k;
    std::cin >> n >> k;
    std::map<int, int> id;
    std::vector<long long> sweets(n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        std::cin >> tmp;
        id[tmp] = i;
        sweets[i] = 0;
    }

    //全員に配れる分だけ一気に配る
    //全員に配れる場合のみif文の中を実行する
    if (k / n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            sweets[i] += (k / n);
        }
        k -= (k / n) * n;
    }
    if (k != 0)
    {
        for (auto itr = id.begin(); itr != id.end(); ++itr)
        {
            k--;
            sweets[itr->second]++;
            if (k <= 0)
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << sweets[i] << std::endl;
    }
}