//calculating the force of attraction on body of mass 'm' g=9.8m/s^2//


#include<stdio.h>
float force(int m)
{
float g = 9.8, force;
force = m * g;
return force;
}

int main()
{
    int m;
    printf("Enter the mass of the body\t",m);
    scanf("%d",&m);
printf("The force of attraction on the body is %f\t", force(m));
    return 0;
}
