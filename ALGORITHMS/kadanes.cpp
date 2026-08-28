#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
   /*  
    for(int st=0;st<n;st++){                //basic subarray loop
        for(int end=st;end<n;end++){            contiguous subarray
            for(int i=st;i<=end;i++){
                cout << arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
/*

int maxSum = INT_MIN;
for(int st=0;st<n;st++){
    int currSum=0;                        //maximum subarray sum
    for(int end=st;end<n;end++){           //brute force approach : o(n^2)time (slow)
        currSum+=arr[end];
        maxSum=max(currSum,maxSum);
    }
}
cout<<"mas subarray is="<<maxSum<<endl;
return 0;
}*/
 
int currsum=0 , maxsum=INT_MIN;
for(int i=0;i<n;i++){                          
currsum+= arr[i];                                             //KADANES ALGORITHM :o(n) time (faster)
maxsum=max(currsum,maxsum);                                        //  At each step, decide whether to 
        if(currsum<0)                                               //. extend the current subarray or start a new one, 
       currsum=0;                                                   // .and keep track of the maximum sum seen so far
}
cout<<"max subarray ="<<maxsum;
return 0;
}