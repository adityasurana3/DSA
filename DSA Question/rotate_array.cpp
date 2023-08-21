// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k = 3;
    int size = sizeof(arr)/sizeof(int);
    vector<int> v;
    for(int i=0;i<size;i++){
        v.push_back(arr[i]);
    }

    vector<int> temp(v);
    for(int j = 0;j<v.size();j++){
        temp[(j+k)%v.size()] = v[j];
    }
    v = temp;
    for(int l=0; l<v.size();l++){
        cout<<v[l];
    }
    return 0;
}