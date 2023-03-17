#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int F;
int R=(-1);
void enqueue(int Queue[],int val,int n)
{
   
    if(F==(-1))
    {
        return;
    }
    if(R==n-1)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        R=R+1;
        Queue[R]=val;
       
    }
   
}
void dequeue(int Queue[])
{
    if(R<=-1)
    {
        cout<<"underflow"<<endl;
    }
   
    else
    {
        F=F+1;
    }
}
 void display (int Queue[])
     {
         if(F>=0)
         {
      for(int i=F; i<=R; i++)
      cout<<Queue[i]<<" ";
      cout<<endl;
         }
         else{}
     }


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int ch,val,n;
    cin>>n;
    int Q[n];
    do{
        cin>>ch;
        switch(ch){
            case 1: {
                cin>>val;
                enqueue(Q,val,n);
                break;
               
            }
                case 2: {
               
                dequeue(Q);
                    break;
                 }
                case 3: {
               
                display(Q);
                    break;
            }
        }
    }
    while(ch!=0);
    return 0;
}