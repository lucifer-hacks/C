/* program for find out the number is odd or even*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    /*even condition*/
    if (n%2==0 && n!=0)
    {
        printf("the number is even\n");
    }
     /*odd condition*/
    else if (n!=0)
    {
        printf("the number is odd\n");
    }
     /*condition for zero*/
    else
    {
        printf("ZERO is not odd and even\n");
    }
    
    return 0;
}