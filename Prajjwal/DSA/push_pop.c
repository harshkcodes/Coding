#include<stdio.h>
#include<conio.h>
int main()
{
    int push();
    int top=-1;
    int item;
    int push (int item)
    {
        if(top==size-1)
        printf("Stack is overflow");
        
        else
        {
            top=top+1;
            stack[top]=item;
        }
    }
    int pop()
    {
        if(top==-1)
        printf("stack is underflow");
       
        else
        {
        int y=arr[top];
        top--
         }
}
return 0;
}
