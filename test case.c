#include <stdio.h>
void main()
{

    int a,b,c,d;
    printf("enter the first octet\n");
    scanf("%d",&a);
    printf("enter the second octet\n");
    scanf("%d",&b);
    printf("enter the third octet\n");
    scanf("%d",&c);
    printf("enter the fourth octet\n");
    scanf("%d",&d);
    if(a>=0&&a<=255&&b>=0&&b<=255&&c>=0&&c<=255&&d>=0&&d<=255)
    {
         printf("valid Address\n");

      if(a==0||a==128)
    {
        printf("this is loop back Address");
    }

      if(a>=1&&a<=127)
      {
          printf("this IP address belongs to class A");
      }

        if(b>=129&&b<=191)
        {
             printf("this IP address belongs to class B");
        }

         if(c>=192&&c<=223)
         {
              printf("this IP address belongs to class C");
         }

            if(d>=224&&d<=255)
            {
                printf("this IP address belongs to class D");
            }
    }
    else
        printf("Invalid IP");
          getch();

    }
