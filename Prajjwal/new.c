/*If the ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three*/


int main()
{
    int  a,b,c;
    printf("Enter The Age of Ram, Shyam and Ajay, respectively\t");
    scanf("%d%d%d", &a, &b, &c);

    if (a<b)
    {
        if (a<c)
        {
            printf("Ram is the youngest of all\n");

        }
        else
        printf("Ajay is the youngest");
    
        
    }
    else if (b<c)

    {
    printf("Shyam is the youngest");
    }
    else
    printf("Ajay is the youngest");
    
    return 0;
}
