#include<iostream>
using namespace std;
int main(){
    int i;
    /*
    int arr[5]={10,20,30,40,50};                       // simple program
 cout<<"Array elements are:";
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
   }
   return 0;
}
*/ 
/*
arr[2]=100;                                               // updating
    cout<<arr[2]<<" ";    
return 0;
}
*/   
/*                           
int  arr[5];
 cout << "Enter 5 numbers:";
 for (int i=0;i<5;i++){
       cin >> arr[i];//input each element                // user input array
 }

    cout << "You entered: ";
    for(int i=0;i<5;i++){
        cout << arr[i];// print each element
    }

    return 0;
}
    */
/*
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos = 3;   // position to insert (index 2)          // INSERTION
    int val = 99;  // value to insert

    // shift elements right
    for(int i = size; i > pos-1; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    size++;

    cout << "Array after insertion: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}
    */
/*

    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2;   // delete element at position 2 (index 1)          // DELETION

    // shift elements left
    for(int i = pos-1; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;

    cout << "Array after deletion: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    return 0;
}

*/
