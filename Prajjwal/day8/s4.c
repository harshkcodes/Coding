/* write a program to print the following pattern :


*
**
***
****



*/

//day 8  4//
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=4; i++)   //line 1//
    {
        for ( j= 1; j <= i; j++)  //line 2//
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
