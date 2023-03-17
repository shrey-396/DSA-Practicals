#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    top=-1;
    scanf("%d",&n);
    do{
       scanf("%d",&choice);
        switch(choice){
            case 1:
                {
                push();
                break;
                }
            case 2:
                {
                pop();
                break;
                }
            case 3:
                {
                display();
                break;
                }
            case 0:
                {
                break;
                }
            default:
                {
                    
                }
                
        }
    }
    while(choice!=0);
    return 0;
}
void push(){
    if (top>=n-1){
        printf("overflow");
    }
    else{
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top<=-1){
        printf("underflow");
    }
    else{
        top--;
    }
}
void display(){
    if (top>=0)
    {
        for(i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
             
        }
        printf("\n");
       
    }
    else{}
}