//print if the given number is odd or even (use switch case)//

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,t;
printf("Enter the number guys\t");
scanf("%d", &a);
 t=a%2;

switch(t)
{
case 0:
printf("Even no.", t);
break;

case 1:
printf("Odd no.", t);
break;

}
return 0;
}
