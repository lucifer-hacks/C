#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(y%4==0)
    {
        if (y%100==0)
        {
            if (y%400==0)
            {            
            printf("true");
            }
            else
            {
                 printf("fales");
            }
            
        }
    }
    else
    {
        printf("fales");
    }
    return 0;
}