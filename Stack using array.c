/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#define n 10
int stack[n];
int top=-1;
void push(int x){
    if(top==n-1)
    {
        printf("stack overflow\n");
    }
    stack[++top]=x;
}
void pop(){
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    top--;
}
void print(){
    int i;
    printf("stack:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
        printf("\n");
    }
}
int main(){
    int value,choice;
    for(int i=0;i<6;i++)
    {
        printf("\n\n***** options to select ******\n");
        printf("1.push\n2.pop\n3print\n");
        scanf("%d",&choice);

    
    switch(choice)
    {
        case 1:printf("Enter your value: ");
               scanf("%d",&value);
               push(value);
               break;
        case 2:pop(); 
              break;      
        case 3:print();
               break;
        default:printf("Enter valid choice ");
    }
    }
    return 0;
}


