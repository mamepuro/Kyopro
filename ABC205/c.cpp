#include <iostream>

int main()
{
    long long int a;
    bool AisNegative = false;
    long long int b;
    bool Bisnegative = false;
    long long int c;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a < 0)
    {
        AisNegative = true;
        a = a * (-1);
    }
    if (b < 0)
    {
        Bisnegative = true;
        b = b * (-1);
    }
    double ac = c * log10(a);
    double bc = c * log10(b);
    if ((c % 2) == 1)
    {
        if (AisNegative)
        {
            ac = ac * (-1);
        }
        if (Bisnegative)
        {
            bc = bc * (-1);
        }
    }
    if (ac < bc)
    {
        printf(">\n");
    }
    else if (ac > bc)
    {
        printf("<\n");
    }
    else
    {
        printf("=\n");
    }
    printf("%lld %lld", ac, bc);
}