#include <iostream>
using namespace std;
// 1.  LINEAR SEARCH
// (I. iterative method)
   /*
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    
    // i. iterative method
    int key = 50;   // element to search
    int pos = -1;   // position tracker
   for(int i = 0; i < size; i++) 
   {                                                                   // LINEAR SEARCH(finding target value)
         if(arr[i] == key) {                                                
            pos = i;   // store index if found
            break;     // stop searching
        }
    }
  if(pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";
   return 0;
}*/
   
// ii.( Recursive method)
/*
int recursivesearch(int arr[], int n, int i,int key) 
{
if(i==n) return -1;
if(arr[i]==key) return i;
return recursivesearch(arr,n,i+1,key);
 }
  
int main(){   
int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key=30;
    cout<<"target: "<<recursivesearch(arr,n,0,key);
    return 0; }  */
    

  // BINARY SEARCH
  // I.iterative method
/*
   int target=50;
   int low=0;
   int high=4;
   while(low<=high)      
   {
    int mid=low+high/2;
    if(arr[mid]==target)
    {
    cout<<"found at index "<<mid;
      return 0;
    }
     else if(arr[mid]<target)      //ignore left half
     {
        low=mid+1;
     }
     else{
        high=mid-1;
     }
   }
   cout<< "not found";
   return 0;
} */
   
// ii.recursive method
/*
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) return -1;  // Base case: if range is invalid    

    int mid = low + (high - low) / 2;

  if (arr[mid] == key) return mid;  // If element is found at mid

    if (key < arr[mid])                                  // If key is smaller, search left half
        return binarySearch(arr, low, mid - 1, key);           

        return binarySearch(arr, mid + 1, high, key);      // Otherwise, search right half
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int pos = binarySearch(arr, 0, size - 1, key);

    if (pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";

    return 0;
}  */


