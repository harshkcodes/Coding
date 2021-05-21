#include <stdio.h>
int main()
{
char ch;
int a,b;
printf("Select action to be performed +,-,* or /\t");
scanf("%c", &ch);
printf("Enter number\t");
scanf("%d %d", &a, &b);

switch (ch)
{
case '+':
printf("%d", a+b); 
break;
case '-':
printf("%d", a-b);
break;
case '*':
printf("%d", a*b);
break;
case '/':
printf("%d", a/b);
break;
default:
printf("invalid choice");
break;
}
return 0;
}
