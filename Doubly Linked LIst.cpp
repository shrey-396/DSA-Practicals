#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class doublylinkedlistnode {
    public:
    int data;
    doublylinkedlistnode *prev;
    doublylinkedlistnode *next;
    doublylinkedlistnode(int data)
    {
        this->data=data;
        this->prev=nullptr;
        this->next=nullptr;    
    }
};
class doublylinkedlist{
    public:
    doublylinkedlistnode* head;
    doublylinkedlistnode* end;
    doublylinkedlist()
    {
        this->head=nullptr;
        this->end=nullptr;
    }
void insert_front(int data){
    doublylinkedlistnode* temp = new doublylinkedlistnode(data);
    if (head == nullptr) {
      head = end = temp;
      return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insert_end(int data) {
    doublylinkedlistnode* temp2 = new doublylinkedlistnode(data);
    if (end == nullptr) {
      head = end = temp2;
      return;
    }
    temp2->prev = end;
    end->next = temp2;
    end = temp2;
}
void delete_front() {
    if (head == nullptr) {
      cout<<"No node in the list to delete";
    }
    if (head == end) {
      head = end = nullptr;
      return;
    }
    head = head->next;
    head->prev = nullptr;
}
    void delete_last() {
    if (end == nullptr) {
      cout<<"No node in the list to delete";
    }
    if (head == end) {
      head = end = nullptr;
      return;
    }
    end = end->prev;
    end->next = nullptr;
  }

  void display() {
    doublylinkedlistnode* temp3 = head;
    while (temp3 != nullptr) {
      cout << temp3->data << " ";
      temp3 = temp3->next;
    }
    cout<<endl;
  }
};
int main() {
    doublylinkedlist d;
     while(true){
    int choices,value;
        cin>>choices;
    if(choices == 0) break;
    switch(choices){
        case 1:
            cin>>value;
            d.insert_front(value);
            break;
          //insert at front
           
        case 2:
            cin>>value;
            d.insert_end(value);
            break;
            //insert at end
       
        case 3:
            d.delete_front();
            //delete fornt
            break;
           
        case 4:
            d.delete_last();
            //delete last
            break;
        case 5:
            d.display();
            break;        
         default:
           cout<<"Invalid choice"<<endl;
    }
   }
}
