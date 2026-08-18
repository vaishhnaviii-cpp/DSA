#include<iostream>
#include<cstring>                         // for C-style string functions
#include <string>                        // for C++ string class
using namespace std;
int main() {
    // for c++(strings)
    int age;
   string name;

cout<<"enter age: ";                 
cin>>age;

cout<< "enter name: ";
cin.ignore();                  //removes that leftover after enter(\n)
getline(cin, name);            //use when name containing spaces

cout << age<<endl;
cout<<name;

// for c-style character arrays
     char naam[50];
     cin.getline(naam , 50);
return 0;
}
