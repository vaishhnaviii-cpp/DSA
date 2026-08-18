/*#include<iostream>                //simple
using namespace std;
int main(){
    int i;
    int marks[5];
    cout<<"marks are:";           
    for(i=0;i<=5;i++){
        cin>>marks[i];
    }
    cout<<"you entered:";
    for(i=0;i<=5;i++){
        cout<<marks[i];
    }
    return 0;
}  */

/*
#include <iostream>                                  //Reverse Array In‑Place
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    cout << "Reversed array: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}  */

/*
#include <iostream>                            //Second largest element
#include <climits>                       //a header file in C++ that defines limits for fundamental data types(int_min)   
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN;      //INT_MIN = -2,147,483,648(any no.will in arr will be greater than this )
    for(int i=0; i<n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    cout << "Second largest: " << second;
} */
 
/*
#include <iostream>                                  //Frequency Count
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool visited[n] = {false};

    for(int i=0; i<n; i++) {
        if(visited[i]) continue;              //visited[] boolean array to mark elements that have already been counted
        int count = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times\n";
    }
}
*/