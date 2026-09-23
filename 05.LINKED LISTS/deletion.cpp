#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};  
int main(){
    Node* n1=new Node(10,nullptr);  
    Node* n2=new Node(20,nullptr);
    Node* n3=new Node(30,nullptr);  
    n1->next=n2;
    n2->next=n3;
    Node* head=n1;
    // delete from beginning
    /*
    Node* temp=head;
    head=head->next;
    delete temp;    
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}   */

   // delete from end   
   /*
Node* temp=head;
while(temp->next->next!=nullptr){
    temp=temp->next;
}
    delete temp->next;
    temp->next=nullptr; 
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;   
}   */

    // delete from position
    /*
    Node* temp=head;
    while(temp->next->data!=20){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=todelete->next;
    delete todelete;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}  */