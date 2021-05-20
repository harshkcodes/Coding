#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    for(i=1;i<=6;i++)
    {
for ( j = 1; j <=i; j++)
{
    printf("%c",'A'+j-1);
}
printf("\n");
    }
}
