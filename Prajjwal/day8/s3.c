//write a program to print the table of n(take n from user)//

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

printf("Enter the the interger ");
scanf("%d", &n);
for (int i = 1; i <=10; ++i)
{
    printf("%d * %d = %d\n", n,i,n*i);

}

    return 0;
}
