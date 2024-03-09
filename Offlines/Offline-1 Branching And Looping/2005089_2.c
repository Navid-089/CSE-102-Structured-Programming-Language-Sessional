#include <stdio.h>
int dayoftheweek(int y,int m);
int daysinmonth(int m,int y);
int main()
{
    int h,q,m,y,i,d_max,c,n=1;

    printf("Enter year:\n");
    scanf("%d",&y);

    printf("Enter month (1-12): \n");
    scanf("%d",&m);

    printf("\n");
    if(m==1)
    {
        printf("JANUARY, %d",y);
    }
    if(m==2)
    {
        printf("FEBRUARY, %d",y);
    }
    if(m==3)
    {
        printf("MARCH, %d",y);
    }
    if(m==4)
    {
        printf("APRIL, %d",y);
    }
    if(m==5)
    {
        printf("MAY, %d",y);
    }
    if(m==6)
    {
        printf("JUNE, %d",y);
    }
    if(m==7)
    {
        printf("JULY, %d",y);
    }
    if(m==8)
    {
        printf("AUGUST, %d",y);
    }
    if(m==9)
    {
        printf("SEPTEMBER, %d",y);
    }
    if(m==10)
    {
        printf("OCTOBER, %d",y);
    }
    if(m==11)
    {
        printf("NOVEMBER, %d",y);
    }
    if(m==12)
    {
        printf("DECEMBER, %d",y);
    }
    printf("\n\nSUN MON TUE WED THU FRI SAT \n");

    d_max=daysinmonth(m,y);
    h=dayoftheweek(y,m);

    if(h==0)
    {
        h=h+7;
    }

    for(i=1; i<h; i++)
    {
        printf("    ");
    }

    c=h;
    while(c<42)
    {
        while(n<=d_max)
        {
            printf("%-2d  ",n);
            n++;
            break;
        }
        if(c%7==0)
        {
            printf("\n");
        }
        c++;
    }
}

int daysinmonth(int m, int y)
{
    int d_max;

        if(m==1 || m==3 ||  m==5 || m==7 || m==8 || m==10 || m==12)
        {
            d_max=31;
        }
        if(m==4 || m==6 || m==9 || m==11)
        {
            d_max=30;
        }

    if(m ==2)
    {
        if((y%4==0) && ((y%400==0) || (y%100!=0)))
        {
            d_max=29;
        }
        else
        {
            d_max=28;
        }
    }
return d_max;
}

int dayoftheweek(int y, int m)
{
    int h=0;
    int q=1;
    if
    (m==1 || m==2)
    {
        m=m+12;
        y=y-1;
    }
    h=(q+(int) 26*(m+1)/10 +y+ (int) y/4 + 6* (int) (y/100) + (int) (y/400) )%7;
    return h;
}

