/* write a program to print numbers which are divisble by 5 in the range n1 and
 n2(take n1 and n2 from user)*/

 //day 8  2//

 #include<stdio.h>

 int main()
 {
     int n1, n2;
     printf("Enter the numbers\t");
     scanf("%d %d", &n1, &n2);

     for (int i=n1;i<=n2; i++)
     {
if (i%5==0)
{
    printf("%d ", i);

}
     }
     
     return 0;
 }
 
