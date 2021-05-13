/*Consider a currency system in which there are notes of seven 
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If 
a sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. 
N*/


#include <stdio.h>

int main()
{
    int amt,a, b,c,d,e,f;
    printf("Enter the amount\t");
    scanf("%d", &amt);

    a=amt/100;
    amt=amt%100;
    b=amt/50;
    amt=amt%50;
    c=amt/10;
    amt=amt%10;
    d=amt/5;
    amt=amt%5;
    e=amt/2;
    amt=amt%2;
    f=amt;


printf("Hundred Rupees Notes = %d\nFifty Rupees Notes = %d\nTen Rupees Notes = %d\nFive Rupees Notes = %d\nTwo Rupees Notes = %d\nOne Rupee Notes = %d\n", a,b,c,d,e,f);

    
    return 0;
}
