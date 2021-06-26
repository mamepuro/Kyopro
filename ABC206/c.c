#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define N_MAX 300001

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main(void)
{
    int n, a[N_MAX];
    bool isLastEqual = false;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans;
    int equals = 1;
    ans = ((n * (n - 1)) / 2);
    qsort(a, n, sizeof(int), cmp);
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] == a[i])
        {
            equals++;
            isLastEqual = true;
        }
        else if (a[i - 1] != a[i])
        {
            ans -= (((equals - 1) * equals) / 2);
            equals = 1;
            isLastEqual = false;
        }
    }
    if (isLastEqual)
    {
        int removabale = ((equals - 1) * equals) / 2;
        ans = ans - removabale;
        equals = 1;
    }
    printf("%d\n", ans);
}