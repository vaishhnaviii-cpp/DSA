#include<iostream>
#include<vector>
using namespace std;

int main()
{
     //cap&size program
    vector<int>vec;                  
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    cout << vec.size() << endl; //3
    cout <<vec.capacity() << endl; //The vector's capacity usually grows by a factor (often doubles) when it runs out of space.
    return 0;
}



/*     // Function to find the single number
     int singleNumber(vector<int>& nums) {                         
    int ans = 0;                     // Start with 0
       for (int num : nums) {        // Take each element from the vector one by one
        ans = ans ^ num;             // XOR the current answer with the current element (n^n=0;0^n=n)
    }

    return ans;                     // Return the single number
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Single number is: " << singleNumber(nums);

    return 0;
}*/