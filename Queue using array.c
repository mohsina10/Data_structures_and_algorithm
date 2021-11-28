/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define n 10
int front=-1,rear=-1;
int queue[n];
void push(int x)
{
    if(rear==n-1)
    {
        printf("queue oveerflow\n");
    }
    else
    {
        if(front==-1 && rear==-1)
        {
            front=0;
        }
    
       queue[++rear]=x;
       printf("value is inserted\n");
    }
    
}
void pop()
{ 
    if(front==-1||front>rear)
    {
        printf("queue underflow\n");
    }
    else
    {
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        printf("element is deleted\n");
        front++;
        
    }
}
void display()
{
    if(front==-1)
    printf("queue is empty\n");
    else
    { 
        printf("Queue elements are:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
        printf("\n");
    }
}


int main()
{
    int choice=0,value;
    while(choice!=4)
    {
        printf("***********Menu************\n");
        printf("1.push\n"); 
        printf("2.pop\n"); 
        printf("3.display\n");
        printf("4.exit\n"); 
        printf("Enter your choice:\n"); 
        scanf("%d",&choice); 
        switch(choice)
    {
        case 1:printf("Enter your value: ");
               scanf("%d",&value);
               push(value);
               break;
        case 2:pop(); 
              break;      
        case 3:display();
               break;
        case 4:printf("Exited\n"); 
              break;
        default:printf("Enter valid choice\n ");
    }
    
        
        
    }

    return 0;
}
