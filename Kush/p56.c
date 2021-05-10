#include<stdio.h>
int main()
{
int match =21, c=1;
int user,computer;
while(c<=5)
{
if(match >1)
{
printf("The Number Of Matchsticks Left = %d\n", match);
printf("Select 1,2,3 or 4 matchsticks.\n");
scanf("%d",&user);
while(user>4 || user<1)
{
printf("Select 1,2,3 or 4 matchsticks.\n");
scanf("%d",&user);
}
computer = 5 -user;
printf("The computer picked up %d matchsticks.\n", computer);
match = match -5;
c++;
}
else if(match ==1)
{
printf("Number Of Matchstick Left = %d\n", match);
printf("You Have To Pick The Last Matchstick. You Lost!\n");
c++;
}
}
return 0;
}
