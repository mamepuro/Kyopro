#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int money_mount = 0;
    int days;
    scanf("%d", &n);
    for (int i = 1;; i++)
    {
        money_mount += i;
        if (money_mount >= n)
        {
            days = i;
            break;
        }
    }
    printf("%d\n", days);
}