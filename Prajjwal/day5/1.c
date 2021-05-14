
/* take name, class , roll no and marks as input and print the output as following :

if marks
>=80 : print A
>60 and <80 : print B
>30 and <=60 : print C
otherwise print : Fail*/

#include<stdio.h>
int main()
{
    int marks, class, rn;
    char name;
    printf("Enter Name\t");
    scanf("%s", &name);
    printf("Enter Class\t");
   scanf("%d", &class);
    printf("Enter Roll no.\t");
    scanf("%d", &rn);
printf("Enter marks\t");
scanf("%d", &marks);


    if(marks>=80)
    {
        printf("A");
    }



else if(marks<80 && marks>60)
{
    printf("B");

}

else if(marks>30 && marks<60)
{
    printf("C");

}

else
{
printf("Fail");
    return 0;
}

}
