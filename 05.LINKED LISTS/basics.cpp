#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
// 1. create and traverse linkedlist
/*
int main(){
Node* n1 = new Node(10,nullptr);
Node* n2 = new Node(20,nullptr);
Node* n3 = new Node(30,nullptr);

n1->next=n2;
n2->next=n3;
Node* temp=n1;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
}
return 0;
} */

// 2. count the number of nodes
/*
int main(){
Node* n1 = new Node(10,nullptr);
Node* n2 = new Node(20,nullptr);
Node* n3 = new Node(30,nullptr);

n1->next=n2;
n2->next=n3;
Node* temp=n1;
int count =0;      
while(temp!=nullptr){
    count ++;
    temp=temp->next;
}
cout<<"no.of nodes: "<<count;
return 0;
} */

// 3.search for an elemnet
/*
int main(){
   Node* n1 = new Node(10,nullptr);
Node* n2 = new Node(20,nullptr);
Node* n3 = new Node(30,nullptr);

n1->next=n2;
n2->next=n3;
Node* temp=n1;
int target =20;      
while(temp!=nullptr){
  if(temp->data==target){
    cout<<"element found";
    return 0;
  }  
  temp=temp->next;
} 
cout<<"element not found";
return 0;
} */

// 4.sum of all nodes
/*
int main(){
Node* n1 = new Node(10,nullptr);
Node* n2 = new Node(20,nullptr);
Node* n3 = new Node(30,nullptr);

n1->next=n2;
n2->next=n3;
Node* temp=n1;
int sum =0;      
while(temp!=nullptr){
  sum = sum + temp->data;
  temp = temp->next;
  }  
cout<<"sum = "<<sum;
return 0;
} */

