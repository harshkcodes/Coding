//day1 2//


#include <stdio.h>


int main()
{
    int num, a1, a2, a3, a4, a5;
    printf("Enter the number\t");
    scanf("%d", &num);

    a1=num%10;
    a2=num/10;
    a3=a2%10;
    a4=a2/10;
    a5= a1+a3+a4;

    printf("\nThe sum of digits is %d\t",a5 );


    return 0;
}
