#include<stdio.h>
void swap(int *x, int*y){
int rod;
rod=*x;
*x=*y;
*y=rod;
}
//void ke saath return type use nahi hota
//int, float ke saath return type use hota hai
//agar function ka return type integer ya float hai toh return statement zaroori hai
int main()
{
int x, y;
printf("Enter the values to be swapped\n");
scanf("%d %d",&x,&y);
printf("the old values of x and y are %d and %d\n", x,y);
swap(&x,&y);
printf("the new values of x and y are %d and %d\n", x,y);
return 0;

}