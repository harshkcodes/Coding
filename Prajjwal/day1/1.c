//day1  1//


#include<stdio.h>

void main()
{
    int num, a, b,c, d, e;
    printf("Enter the number=\n");
scanf("%d", &num);

a=num%10;
b=num/10;
c=b%10;
d=b/10;
e=(d*100)+(c*10)+(a);
if (e==num)
printf("Number is palindrome");
else
printf("Number is not palindrome");

}
