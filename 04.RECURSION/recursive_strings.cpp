 #include <iostream>
using namespace std;
//   1.print string in reverse
/*
void reversePrint(string str, int i) {
    if (i == str.length())
        return;
  reversePrint(str, i + 1);
    cout << str[i] << " ";
}

int main() {
    string str = "hello";
  reversePrint(str, 0);
   return 0;
}     */             

// 2.count vowels
/*
int countVowels(string str, int i) {
    if (i == str.length())
        return 0;
     int count = 0;
  if (str[i] == 'a' || str[i] == 'e' ||
        str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u') {
        count = 1;
    }
    return count + countVowels(str, i + 1);
}
int main() {
    string str = "hello world";
  cout << countVowels(str, 0);
    return 0;
}  */

// 3.remove a character
/*
void removeChar(string str, int i, char ch) {
    if (i == str.length())
        return;
  if (str[i] != ch)
        cout << str[i];
    removeChar(str, i + 1, ch);
}
int main() {
    string str = "banana";
    removeChar(str, 0, 'a');
        return 0;
}  */

//  4.tower of hanoi
/*
void hanoi(int n, char source, char temporary, char destination)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    hanoi(n - 1, source, destination, temporary);                          // Move n-1 disks from source to temporary
    cout << "Move disk " << n << " from " << source <<" to"            // Move the biggest disk from source to destination
     << destination << endl;
    hanoi(n - 1, temporary, source, destination);                        // Move n-1 disks from temporary to destination
}
int main()
{
    int n = 3;
 hanoi(n, 'A', 'B', 'C');
    return 0;
}           */

// 5.subsequence
/*
void subseq(string str,string ans,int i){
if(i==str.length())      
{ cout<< ans << endl;
return ; }
subseq(str,ans,i+1) ;                       // dont tale str[i]
subseq(str,ans+str[i],i+1); 
}
int main(){
    string str="abc";
    subseq(str,"",0);
    return 0;
} */




