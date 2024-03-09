#include <stdio.h>


int main()
{
    int a[100],b[100],i,j=0,n1,n2,c[100],m,id;

    printf("How many inputs are there in array 1:");
    scanf("%d",&n1);

    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("How many inputs are there in array 2:");
    scanf("%d",&n2);

    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }


    for(i=0; i<n1; i++)
    {
        c[j]=a[i];
        j++;
    }

    for(i=0; i<n2; i++)
    {
        c[j]=b[i];
        j++;
    }


    int min,temp;
    int n=n1+n2;

    printf("\n\nCombining the array with all the elements:");
    for(i=0; i<n; i++)
    {
        printf("%d ",c[i]);
    }



    for(i=0; i<n; i++)
    {
        min=c[i];
        id=i;
        for(j=i+1; j<n; j++)
        {
            if(c[j]<min)
            {
                min=c[j];
                id=j;

                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    printf("\n\nSorting the elements non-decreasingly: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",c[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(c[j]==c[i])
            {
                for(m=j; m<n-1; m++)
                {
                    c[m]=c[m+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\n\nThe combined array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",c[i]);
    }

}
