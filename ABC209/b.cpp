#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int n;
    bool doLoseTakahashi = false;
    std::string s;
    std::cin >> n >> s;
    int count = 1;
    for (int i = 0; i <n ; i++)
    {
        if (s.at(i) == '1')
        {
            if ((i+1) % 2 == 1)
            {
                doLoseTakahashi = true;
                break;
            }
        }
        count++;
    }
    if (doLoseTakahashi)
    {
        std::cout << "Takahashi" << std::endl;
    }
    else
    {
        std::cout << "Aoki" << std::endl;
    }
}