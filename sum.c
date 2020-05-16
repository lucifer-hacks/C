#include<stdio.h>
int main()
{
    int a=123,b=333,sum,rev=0,rem;
    sum=a+b;
    printf("%d\n",sum);
    while(sum!=0)
    {
        rem=sum%10;
        rev=rev*10+rem;
        sum=sum/10;
    }
    printf("%d",rev);
    return 0;
}