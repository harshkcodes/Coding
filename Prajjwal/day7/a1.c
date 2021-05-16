//day 7  1//

#include<stdio.h>

int main()
{
    int i,j;

    for ( i = 1; i <=4; i++) //line 1//
    {
        for ( j= 1; j <= i; j++)  //line 2//
        {
            printf("%d", j);
        }
        printf("\n");
    }
    

   
    return 0;
}
