#include <stdio.h>
    int dayoftheweek(int y,int m,int q);

    int main()
    {
        int h,q,m,y;

        printf("Enter year:");
        scanf("%d",&y);

        printf("\nEnter month (1-12): ");
        scanf("%d",&m);

        printf("\nEnter day:");
        scanf("%d",&q);

        h= dayoftheweek(y,m,q);

        printf("\n");
if(m==1)
{
    printf("JANUARY %d,%d",q,y);
}
if(m==2)
{
    printf("FEBRUARY %d,%d",q,y);
}
if(m==3)
{
    printf("MARCH %d,%d",q,y);
}
if(m==4)
{
    printf("APRIL %d,%d",q,y);
}
if(m==5)
{
    printf("MAY %d,%d",q,y);
}
if(m==6)
{
    printf("JUNE %d,%d",q,y);
}
if(m==7)
{
    printf("JULY %d,%d",q,y);
}
if(m==8)
{
    printf("AUGUST %d,%d",q,y);
}
if(m==9)
{
    printf("SEPTEMBER %d,%d",q,y);
}
if(m==10)
{
    printf("OCTOBER %d,%d",q,y);
}
if(m==11)
{
    printf("NOVEMBER %d,%d",q,y);
}
if(m==12)
{
    printf("DECEMBER %d,%d",q,y);
}


        if(h==0)
        {
            printf(" is SATURDAY");
        }

         if(h==1)
        {
            printf(" is SUNDAY");
        }

         if(h==2)
        {
            printf("% is MONDAY");
        }

         if(h==3)
        {
            printf(" is TUESDAY");
        }

         if(h==4)
        {
            printf(" is WEDNESDAY");
        }

         if(h==5)
        {
            printf(" is THURSDAY");
        }

         if(h==6)
        {
            printf(" is FRIDAY");
        }


}

int dayoftheweek(int y, int m,int q)
{
    int h=0;
    if
        (m==1 || m==2)
    {
        m=m+12;
        y=y-1;

    }

    h=(q+(int) 26*(m+1)/10 +y+ (int) y/4 + 6* (int) (y/100) + (int) (y/400) )%7;
    return h;
}



