

#include <stdio.h>

int special(int);

int main()
{
    int n, m;
    printf("Enter your number:");
    scanf("%d", &n);
    m = special(n);

    if (m == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

int special(int n)
{

    if (n == 0)
    {
        return n;
    }
    
 

    int x = 0;
    x = (n % 10) * (n % 10) + special(n / 10);
    // printf("\n%d %d ",n,x);

   

    if(x >= 10) 
        x = special(x);
        

    return x;
}
