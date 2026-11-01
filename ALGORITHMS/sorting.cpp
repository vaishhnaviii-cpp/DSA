#include <iostream>                          
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i]; 
        /*
     for (int i = 0; i < n - 1; i++) {         outerloop(no.of passes)
   for (int j = 0; j < n - i - 1; j++) {        innerloop(comparisions)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];                        //BUBBLE SORT
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}*/
/*
                                                                    
    for (int i = 0; i < n - 1; i++) {                   //SELECTION SORT
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {        //Inner Loop (j)  Starts from i+1 to n-1
            if (arr[j] < arr[minIndex]) {        //minIndex is a variable that stores the position (index) of the smallest element found in the unsorted part of the array during each pass.
                                                                                                                                      
                minIndex = j;
            }                                              
        }
        // Swap smallest with arr[i]
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
*/ 
/*
                                                              //INSERTION SORT
         for (int i = 1; i < n; i++) {
        int key = arr[i];   // element to insert
        int j = i - 1;

        // shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;   // insert key at correct position
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
*/
