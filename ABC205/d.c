#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define A_MAX 1000000000000000000
#define N_MAX 10000
int main(void)
{
    int n, q;
    long long int a[N_MAX];
    long long int k[N_MAX];
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &k[i]);
    }
    int c = 0;
    while (q > 0)
    {
        long long int kk = k[c];
        long long int count = 0;
        for (long long int i = 0; i < N_MAX; i++)
        {
            if (i = a[count])
            {
                count++;
                continue;
            }
            kk--;
            if (kk == 0)
            {
                printf("%lld", i);
                break;
            }
        }
        q--;
        c++;
    }
}