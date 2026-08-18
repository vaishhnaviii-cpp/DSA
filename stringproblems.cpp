//1.reverse a string 

//c++ styled string                                                // c styled string
/*                                                               
#include<iostream>                                               #include<iostream> 
#include<string>                                                  #include<cstring>
#include<algorithm>                                               using namespace std;
using namespace std;                                                int main(){
int main(){                                                            char str[100]="hello"
    string str;                                                        int n = strlen(str);
    getline(cin,str);                                                  for(i=0;i<=n/2;i++){
    reverse(str.begin() , str.end());                                    swap(str[i],str[n-i-1]); }
    cout << "reversed: " << str << endl;                               cout << "Reversed: " << str << endl; }
}*/                                                                       
 

//2.Palindrome Check
/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "vaishnavi";
    string rev = str;
    reverse(rev.begin(), rev.end());
    cout << (str==rev ? "palindrome" : "not a palindrome") << endl;   // (condition ? value_if_true : value_if_false) same as if-else
} */

//3.conver uppercase to lower
 /*
 traverse and s[i]=toupper(s[i]);
 */

//4.count frequency of ch
/*
int count = 0;traverse; and if(s[i]==ch) {count++;}
*/

//5.count vowels and constants
/*
int vowels=0,int constants=0
traverse and use if for all 5 vowels using ||(or) and vowels++
else consonants++
*/