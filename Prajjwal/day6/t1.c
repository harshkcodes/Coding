//DAY 6  1//

//print odd numbers between numbers n1 and n2//


#include <stdio.h>



int main()
{
  int n1,n2;
  printf("Enter two numbers\n");
  scanf("%d %d", &n1,&n2);


  for(int i=n1;i<=n2 ;i++)
  {
  if (i%2!=0)
  {
   printf("%d ", i );
  }
  
  }
  return 0;
}
