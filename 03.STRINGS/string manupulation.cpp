#include<iostream>
#include<string>
using namespace std;
int main(){
    //length or size 
    string s="hello world";                                         
     cout<<"length of the string: " <<s.length()<<endl;   // s.size() does same work
     
     //adding ch at last
        s.push_back('!');                            //just perform action,doesnt return value so cant write in cout(void func)
     cout<<"after adding !: "<< s <<endl;

     //remeving last ch
         s.pop_back( );
      cout<<"after removing: "<< s <<endl;

      //part of string                                          //substr(start,length)
       cout<<"substring: "<< s.substr(0,5)<<endl;

       //finding ch                                          //gives the index where it starts from,works for only sequence ch
        cout<<" finding : "<< s.find("wo")<<endl;

        //adds another string
        s.append(" yo");
        cout << "after adding other string: "<< s <<endl;

        //erasing                                           //erase(start,count)
        s.erase(3,5);                                         //start at index(3) and erase 5 ch's
        cout<< " after erasing: "<< s<<endl;



     return 0;
}