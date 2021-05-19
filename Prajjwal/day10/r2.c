//day 10  2//

/* write a program to take a number from user(between 1-5) and
 print it in words(use switch case)*/

 #include<stdio.h>

 int main()
 {
     int num;
     printf("Enter the number guyz\t");
     scanf("%d", &num);
     switch(num)
     {
         case 1:
printf("One");
break;
     case 2:
printf("Two");
break;
     case 3:
printf("Three");
break;
     case 4:
printf("Four");
break;
     case 5:
printf("Five");
break;
default:
printf("No cases match");
break;
     }


     return 0;
 }
 
