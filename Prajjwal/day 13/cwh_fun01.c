//average of three no.s using functions//


#include<stdio.h>
float avg(int a,int b,int c);

int main()
{
    int a,b,c;
    float z;
    printf("Enter the numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    z=avg(a,b,c);

    return 0;
}
float avg(int a, int b, int c)
{
 float z=(a+b+c)/3.0;   
printf("Average of the numbers is %f\n",z);
}