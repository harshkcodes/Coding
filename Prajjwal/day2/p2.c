// day2_2//
#include<stdio.h>

int main()
{

int rn, s1, s2, s3, s4, avg ;
char name[10];

printf("Enter a name, roll number, marks of four subjects \n");
scanf("%s %d %d %d %d %d" , &name, &rn, &s1,&s2, &s3, &s4);

avg = (s1+s2+s3+s4)/4;
printf("Name =%s\nRoll number = %d\nAverage = %d", name,rn,avg);



    return 0;
}
