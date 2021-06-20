#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    float ans = (float)a / 100.f * (float)b;
    printf("%lf", ans);
}