// pointer arithmetic

#include<stdio.h>
int main()
{
    int i=56;
    int *ab = &i;
    printf("The value of ab is %u\n", ab);
    ab++;

    printf("The value of ab is %u\n", ab);

   ab--;
    
    printf("The value of ab is %u\n", ab);
    return 0;
}
  