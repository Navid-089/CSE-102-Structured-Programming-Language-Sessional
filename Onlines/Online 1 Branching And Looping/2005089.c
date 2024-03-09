#include <stdio.h>

int findVal(int n)
{
    int j = 0;
    if (n % 3 == 0)
    {
        j = 2 * (n / 3) ;
    }
    else if (n % 3 == 1)
    {
        j = 2 * (n / 3) + 1;
    }

    else if (n % 3 == 2)
    {
        j = 2 * (n / 3) + 1;
    }
}

int main()
{
    int n, a = 1, b, m, i, j;
    printf("enter the value:");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        a = 3 * a;
    }

    if (n % 3 == 1)
    {
        b = 1;
        m = a / b;
        printf("%d", m);
    }
    if (n % 3 == 0)
    {
        b = 3;
        printf("%d/%d", a, b);
    }

    if (n % 3 == 2)
    {
        b = 2;
        printf("%d/%d", a, b);
    }

    j = findVal(n);

    printf("\n\nThe number of integers are %d", j);
}
