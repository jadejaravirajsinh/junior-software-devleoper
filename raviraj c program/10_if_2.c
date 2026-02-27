#include<stdio.h>
void main()
{
    int lenth,width;
    printf("enter lenth:");
    scanf("%d",&lenth);
    printf("enter width:");
    scanf("%d",&width);

    if(lenth>width)
    {
        printf("shape is portrait");
    }
 if(lenth<width)
    {
        printf("shape is landscap");
    } 
     if(lenth==width)
    {
        printf("shape is square");
    }
}