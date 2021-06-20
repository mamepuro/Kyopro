#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define N_MAX 300001

int main(void)
{
    int n, a[N_MAX], index[N_MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        //Sindex[i] = i;
    }
    printf("%d", n);
}