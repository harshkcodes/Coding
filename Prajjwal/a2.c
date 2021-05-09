//Day 01//

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d" , &num);

    for(int x = 1; x<=10; x++)
    {
        printf("%d x %d = %d\n" , num, x, num*x);   }
    
    return 0;
}
