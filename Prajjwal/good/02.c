
// array using external input

#include<stdio.h>
int main()
{
    int arr[10],i,size;
    printf("Enter size of array\t");
    scanf("%d", &size);
    printf("Enter elements of array\t");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
     printf("%d ", arr[i]);
    }
    
    return 0;
}
