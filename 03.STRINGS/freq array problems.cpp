#include<iostream>
using namespace std;
int main(){
string s1 , s2;
cout<<"s1: ";
cin>>s1;
cout<<"s2: ";
cin>>s2;
int freq[26]={0}; 

//  1.character frequency
/*                       //create array of 26 elements (0=a,1=b,2=c,......25=z)
for(int i=0;i<s.length();i++){
    freq[s[i]-'a']++;                    //gives index of ch (ex:'b'-'a'=1)
}
for(int i=0;i<26;i++){
    if(freq[i]>0)      {                                 //if ch occured atleast once
   cout<<char(i+'a')<<"-->"<<freq[i]<<endl;               //  i+'a' converts index back to ch (ex: i=0-->'a';i=1-->'b')
    }                                                     //ASCII value of a=97,b=98,c=99,d=100 so [i+'a'; if i=1 then 1+97=98 gives ch b]

}
return 0;
} */


// 2.first non-repeating character
 /*
int freq[26]={0};
for(int i=0;i<s.length();i++){
    freq[s[i]-'a']++;
}
for(int i=0;i<s.length();i++){
    if(freq[i]==1)
    cout<<"F.N.C"<<char(i+'a')<<endl;
}
    return 0;
}*/


// 3.anagram check  
for(int i=0;i<s1.length();i++){
    freq[s1[i]-'a']++;        
}
for(int i=0;i<s2.length();i++){
    freq[s2[i]-'a']--;  
}
bool isanagram = true;
for(int i=0;i<26;i++){
    if(freq[i]!=0)
     isanagram=false; 
    break;
} 
if(isanagram)
cout<<"anagram";
else
cout<<"not anagram";
return 0;   
}