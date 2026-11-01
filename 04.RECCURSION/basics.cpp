#include<iostream>
#include<string>
using namespace std;
// 1.factorial
/*
int factorial(int n) {
    if (n == 0) return 1;   // Base case
    return n * factorial(n - 1);  // Recursive call
}
int main() {
    int num ;
    cout<<"enter num: ";
    cin>>num;
    cout<<"factorial of "<< num <<" "<< "is "<< factorial(num);
    return 0;
}*/

// 2.fibonacci
/*
int fib(int n){
if(n<=1) return n;
return fib(n-1)+fib(n-2) ;
}
 
int main(){
   int n; cin>>n;
   cout<<fib(n);
   return 0;
} */

// 3.print number 1 to N and N to 1 
 /*
 void printasc(int n) {                
    if(n==0) return;            // 1 to N
    printasc(n-1);
    cout<<n<<" ";
 }
  void printdesc(int n) {         //N to 1
    if(n==0) return;
    cout<<n<<" ";
    printdesc(n-1);
 }
 

 int main(){
    int n;  cin>>n; 
    cout<<"Ascending: ";
    printasc(n);
    cout<<endl;

    cout<<"descending: ";
    printdesc(n);
    cout<<endl;
    return 0;
 }  */

// 4. sum of fisrt natural numbers
/*
 int sum(int n){
 if(n==0) return 0;
 return (n) + sum(n-1); }
  
 int main(){
    int n=5;
    cout<<"sum = "<<sum(n);
    return 0;
 } */

// 5. check if string is palindrome
 /*
 bool ispalindrome(string s, int start, int end){
    if(start>=end) return true;
    if(s[start]!=s[end]) return false;
    return ispalindrome(s, start+1,end-1);
      }
      int main(){
        string s; cin>>s;
        if(ispalindrome){
        cout<<"palindrome";}
        else{
        cout<<"not a palindrome" ;}
      return 0;
}*/
 
// 6.sum of digits
/*
int sumDigits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n = 1234;

    cout << sumDigits(n);

    return 0;
} */

// 7.count the digits
/*
int countDigits(int n) {
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main() {
    int n = 1234;

    cout << countDigits(n);

    return 0;
} */

// 8.reverse a number
/*
int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n = 1234;

    cout << reverseNumber(n);

    return 0;
} */