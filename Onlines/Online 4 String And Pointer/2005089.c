/*
*/


#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter the string:");

   gets(s);

   int length=strlen(s);

   int key;
   printf("Enter the value of key: ");
   scanf("%d",&key);

   int i=0;


   while(s[i] != '\0')
   {
       if(s[i] >= '\A' && s[i] <= '\Z')
       {
           if (s[i]-key >= '\A')
           s[i]=s[i]-key;

           else
            s[i]=s[i]-key+26;

           printf("%c",s[i]);
       }






        i++;

}
return 0;
}
