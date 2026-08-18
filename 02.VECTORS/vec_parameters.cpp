#include<iostream>
#include<vector>
using namespace std;

    void funcByValue(vector<int> v) {
    v.push_back(100);   // modifies only the copy
    cout<<"inside the funcbyval: ";
    for(int x : v) cout<< x<<" ";
    cout<<endl;
    }

void funcByRef(vector<int>& v) {
    v.push_back(100);   // modifies the original
    cout<<"inside funcbyref: ";
     for(int x : v) cout<< x<<" ";
     cout<<endl;
}

int main() {
    vector<int> vec = {1,2,3};
    cout << "original vec in main: ";
    for(int x : vec) cout<<x<<" ";
    cout<<endl;

    funcByValue(vec);  // vec stays {1,2,3}
    cout<<"after func by value,vec in main: ";
 for(int x : vec) cout<< x<<" ";
 cout<<endl;
    
    funcByRef(vec);     // vec becomes {1,2,3,100}
  cout<<"after func by ref,vec in main: ";
    for(int x : vec){
        cout<<x<<" ";
    }
return 0;
}