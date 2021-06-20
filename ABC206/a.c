#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n > 191)
    {
        printf(":(\n");
    }
    else if (n < 191)
    {
        printf("Yay!\n");
    }
    else
    {
        printf("so-so\n");
    }
}