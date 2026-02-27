#include<stdio.h>
void main()
{
    int day_number;
    printf("input the gnumber:");
    scanf("%d",&day_number);

    if(day_number==1)
    {
        printf("monday");
    }
     if(day_number==2)
    {
        printf("tuesday");
    }
     if(day_number==3)
    {
        printf("wenesday");
    }
     if(day_number==4)
    {
        printf("thursday");
    }
     if(day_number==5)
    {
        printf("friday");
    }
     if(day_number==6)
    {
        printf("saturday");
    }
     if(day_number==7)
    {
        printf("sunday");
    }
    if(day_number>7)
    {
        printf("invalid number");
    }
}