//take a number from user and print if it is +ve , -ve or zero//

#include<stdio.h>
int main()
{
    int a;

    printf("Enter the number\t");
    scanf("%d", &a);

    if (a>0)
    {
        printf("The number is positive");

    }
    
    else if (a<0)

    {
        printf("The number is negative");

    }
    else
    {


printf("Tne number is void");
    }
    return 0;
}
