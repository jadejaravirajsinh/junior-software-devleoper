#include<stdio.h>
int main()
{
    int a,b,c,result;
   printf("enter value for a:");
   scanf("%d", &a);
   printf("enter value of b:");
   scanf("%d", &b);
   printf("enter value of c:");
   scanf("%d", &c);

   result=a<b && b<c;
   printf("\n %d=%d<%d && %d<%d", result,a,b,b,c);

   result=a<b || b>c;
   printf("\n %d=%d<%d && %d<%d", result,a,b,b,c);

   result=!(a<b && b<c);
   printf("\n %d=%d<%d && %d<%d", result,a,b,b,c);

   return 0;
}
