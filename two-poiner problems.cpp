//1.reverse string using two-pointer technique
#include<iostream>                                             
#include<string> 
using namespace std;
int main(){
      string s;
      cin>>s;
      int left=0;
      int right=s.length()-1;

      //1.reverse string using two-pointer technique
      /*
      while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
      }
      cout<<"reversed string is: "<<s;
      return 0;
}*/

      //2.palindrome using two-pointers

      bool palindrome = true;
      while(left<right){
        if(s[left]!=s[right]){
            palindrome = false;
            break;
        }
            left++;
            right--;
        }
        if(palindrome)
            cout<<"palindrome";
          else
            cout<<"not a palindrome";
        return 0;
      }

