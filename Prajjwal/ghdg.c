#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);


    //int a[n];
    int *a = (int *)malloc(sizeof(int) * n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];

    }
printf("%d",sum);
    return 0;
}
