/* P34 Date: 30.04.2021 */
#include<stdio.h>
int main()
{
    int year,leap;

    printf("Enter The Year");
    scanf ("%d", &year);

    int temp = year;
    temp = temp - 2001;
    if(temp<0)
        temp = temp * (-1);
    leap = ((temp)/4)-((temp)/100)+((temp)/400);
    year = year + leap;
    if(year%7==6)
        printf("Monday");
    else if(year%7==0)
        printf("Tuesday");
    else if(year%7==1)
        printf("Wednesday");
    else if(year%7==2)
        printf("Thurday");
    else if(year%7==3)
        printf("Friday");
    else if(year%7==4)
        printf("Saturday");
    else if(year%7==5)
        printf("Sunday1");


}
