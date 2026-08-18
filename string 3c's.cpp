#include<iostream>
#include<cstring>                         // for C-style string functions
#include <string>                        // for C++ string class
using namespace std;
int main() {
      // --- C-style string ---
      
      char cstr1[6]={'h','e','l','l','o','\0'};
      char cstr2[6]="world";
      cout<<"c-style strings:"<<endl;
      cout<<"string 1:"<<cstr1<<endl;
      cout<<"string 2:"<<cstr2<<endl;

       // concatenate and find length
        strcat(cstr1, cstr2);                               // append src (cstr2) to dest (cstr1)
    cout << "Concatenated: " << cstr1 << endl;                  //After strcat:
     cout << "Length: " << strlen(cstr1) << endl;                //cstr1 = HelloWorld(changed)
                                                                //cstr2 = World      (unchanged)   

     //compare strings                                  //Returns an integer difference between the first mismatched characters.
 cout << "comparing the strings: "<<endl;               //  // Could be -1, -15, +3, etc. depending on ASCII values.
   cout << strcmp(cstr1,cstr2)<<endl;    
                                                          
        //copy strings
 cout << "copying the strings: "<<endl;
  cout << strcpy(cstr1,cstr2)<<endl;

       // --- C++ strings ---

     cout<<"c++ style string"<<endl;
     string str1 = "hello";
    string str2 = "world";
cout<<"string 1:"<<str1<<endl;
cout<<"string 2:"<<str2<<endl;

   // concatenate and find length
   string combined = str1 + str2;
   cout<< "concatenated: "<<combined<<endl;
   cout<<"length: "<<combined.length()<<endl;

   //compare the strings                                            //return 0 if not equal and 1 if equal
   cout << "comparing the strings: "<<endl;
  cout<<( str1==str2)<<endl;

  //copying strings
  cout << "copying the strings: "<<endl;
  cout<<(str1=str2);
   return 0;
}
