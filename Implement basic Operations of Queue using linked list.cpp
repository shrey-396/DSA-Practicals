#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



  class Node {
public:
    int data;
    Node* next;
   
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};
  Node *f,*r;

 
   
   

    void enqueue(int data)
    {
        Node *temp = new Node(data);
       
        if(f==NULL)
        {
            f=temp;
            r=temp;
        }
        else
        {
            r->next=temp;
          r=temp;
        }
       
    }
   
    void deque()
    {
        if(f==NULL)
        {
            cout<<"underflow";
            return ;
        }
        else if(f==r)
        {
            f=NULL;
            r=NULL;
        }
        else
        {
        f=f->next;
        }
    }
   
  void display()
    {
        Node* temp;
 
        if (r == NULL) {
            cout << "underflow";
            exit(1);
        }
        else {
            temp = f;
            while (temp != NULL) {
 
                cout << temp->data<<" ";
 
                temp = temp->next;
               
           
        }
            cout << "\n";
    }
  }
   

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    int data,ch;
    do{
        cin>>ch;
        switch(ch)
        {
            case 1:
                {
                    cin>>data;
                    enqueue(data);
                    break;
                }
               
            case 2:
                {
                    deque();
                    break;
                }
            case 3:
                {
                    display();
                    break;
                }
            case 0:
                {
                   
                }
        }
       
    }
    while(ch!=0);
    return 0;
}
