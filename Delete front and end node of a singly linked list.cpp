#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node
{ public:
int data;
Node *next;
Node()
{ 
data = 0;
next = NULL;
}
Node(int d)
{ 
data = d;
next = NULL;
}
};

void insert_end(Node *&head, Node *&tail, int data)
{
if (head == NULL)
{
Node *temp = new Node(data);
head = temp;
tail = temp;
return;
}
Node *temp = new Node(data);
tail->next = temp;
tail = temp;
} 

void delete_front(Node*&head)
{
if(head == NULL)
{
cout<<"No Node";
return;
}
head = head->next;
}
void delete_end(Node *&head, Node *&tail)
{
if(head == NULL)
{cout<<"No Node";
return;
}
Node *cur = head;
while (cur->next != tail)
{
cur = cur->next;
}
cur->next = tail->next;
cur = tail;
}
void print(Node *head)
{
if(head == NULL)
{
cout<<"No Node";
return;
}
Node *cur = head;
while (cur != NULL)
{
cout << cur->data << " ";
cur = cur->next;
}
cout << endl;
} 
int main()
{
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
Node *head = NULL;
Node *tail = head;
int t; 
cin>> t; 
while (t!= 0)
{ 
if (t== 1)
{ 
int n; 
cin >>n;
insert_end(head,tail, n);
}
else if (t == 2)
{
delete_front(head);
}
else if (t == 3)
{
delete_end(head, tail);
}
else if (t == 4)
{
print(head);
}
else if (t == 0)
break; 
cin >>t;
}
return 0;
}
