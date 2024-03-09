#include <stdio.h>
#define int_size sizeof(int) * 8

int main()
{
    unsigned int num, num1 = 0, num2 = 0, num3;
    int i = 0;
    int j = 0, m = 0;
    printf("Enter your number : ");
    scanf("%i", &num);

    for (i = 0; i < int_size; i++)
    {
        num3 = num & 1;
        if (i % 2 == 0)
        {

            num3 = num3 << j;

            num1 = num1 | num3;
            j++;
        }

        else
        {

            num3 = num3 << m;

            num2 = num2 | num3;
            m++;
        }
        num = num >> 1;
    }

    if (num1 > num2)
        printf("%i", num1);
    else
        printf("%i", num2);

    return 0;
}
