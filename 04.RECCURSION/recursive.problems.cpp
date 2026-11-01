#include<iostream>
using namespace std;
//  1.check is array is sorted
/*
 bool issorted(int arr[],int n, int index){
 if(index==n-1) return true;
 if(arr[index]>arr[index+1]) return false;
 return issorted(arr,n,index+1);  }

 int main(){
    int arr[]={1,6,9,10,14};
    int n=5;
    cout <<issorted(arr,n,0);
 }  */

 //  2.find maximum element
 /*
 int findmax(int arr[],int n,int index) {
 if(index==n-1) return arr[index];     //base case
int maxofrest = findmax(arr,n,index+1);
if (arr[index]>maxofrest) return arr[index];
else
return maxofrest;
 }
 int main(){
    int arr[]={12,2,3,34,67};
    int n=5;
    cout<<"The maximum element is "<<findmax(arr,n,0);
    return 0;
 } */

 //  3.find minimum element
 /*
 int findmin(int arr[],int n,int index) {
 if(index==n-1) return arr[index];     //base case
int minofrest = findmin(arr,n,index+1);
if (arr[index]<minofrest) return arr[index];
else
return minofrest;
 }
 int main(){
    int arr[]={12,2,3,34,67};
    int n=5;
    cout<<"The manimum element is "<<findmin(arr,n,0);
    return 0;
 }  */

 // 