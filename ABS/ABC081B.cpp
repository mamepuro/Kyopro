#include <iostream>
#include <vector>

int main()
{
    int n;
    bool doContinue = true;
    int count = 0;
    std::cin >> n;
    std::vector<long> A(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if ((A[i] % 2) == 0)
            {
                A[i] /= 2;
            }
            else
            {
                doContinue = false;
                break;
            }
        }

        if (doContinue)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    std::cout << count << std::endl;
}