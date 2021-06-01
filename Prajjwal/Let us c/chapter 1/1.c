/*Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary.   */


//Conversion of Ramesh's gross salary//

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float bp, da,hr,gross;
    printf("Enter basic pay\t");
    scanf("%f", &bp);


    da=0.4*bp;
    hr=0.2*bp;
    gross= da+hr+bp;

printf("Ramesh's gross pay is %0.01f\t", gross);

    return 0;
}
