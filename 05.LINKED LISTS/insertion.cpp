#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
//1.insertion at beginning
/*
int main(){
Node* n1=new Node(10,nullptr);
Node* n2=new Node(20,nullptr);
Node* n3=new Node(30,nullptr);
n1->next=n2;
n2->next=n3;
Node* newnode = new Node(5,nullptr);
newnode->next=n1;
n1=newnode;
Node* temp=n1;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
}
return 0;
} */

//2.insertion at end
/*
int main(){
Node* n1=new Node(10,nullptr);      
Node* n2=new Node(20,nullptr);
Node* n3=new Node(30,nullptr);
n1->next=n2;
n2->next=n3;

Node* newnode=new Node(40,nullptr);
Node* temp=n1;
while(temp->next!=nullptr){
    temp=temp->next;
}
temp->next=newnode;

temp=n1;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
}
return 0;
} */

//3.insertion in between
/*git
int main(){ 
    Node* n1=new Node(10,nullptr);
    Node* n2=new Node(20,nullptr);      
    Node* n3=new Node(30,nullptr);
    n1->next=n2;    
    n2->next=n3;
    Node* newnode=new Node(15,nullptr);
    newnode->next=n2;
    n1->next=newnode;
        while(n1!=nullptr){
        cout<<n1->data<<" ";    
        n1=n1->next;    
        }
        return 0;
}  */



