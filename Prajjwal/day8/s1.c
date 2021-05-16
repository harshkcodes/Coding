/* write a program to count the number of odd numbers present
 in the range n1 and n2(take n1 and n2 from user)*/

//day 8  1//

 #include<stdio.h>

 int main()
 {
     int n1,n2,count=0;

      printf("Enter two numbers\t");
      scanf("%d %d", &n1,&n2);

 for (int i=n1;i<=n2;i++)
 {
  if (i%2!=0)
  {
count++;
  }
 }
  printf("%d", count);
     return 0;
 }
 
