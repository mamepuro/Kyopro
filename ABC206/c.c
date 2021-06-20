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
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans;
    int equals = 1;
    int equal_num = 0;
    ans = n * (n - 1) / 2;
    qsort(a, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            equals++;
        }
        else if (a[i] != a[i + 1])
        {
            int removabale = (equals - 1) * equals / 2;
            ans = ans - removabale;
            equals = 1;
        }

        printf("%d", a[i]);
    }
    printf("\n");
    printf("%d", ans);
}