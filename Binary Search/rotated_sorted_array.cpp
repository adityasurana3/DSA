#include<iostream>
using namespace std;

int pivotElement(int size, int arr[]){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while (start<end)
    {
        if (arr[mid]>arr[0]){
            start = mid+1;
        }
        else
        {
            end =mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    while (start<=end){
        if (arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[5] = {7,9,1,2,3};
    int size = 5;
    int key;
    int ans;
    cout << "Enter the number you want to find in an  array: ";
    cin >> key;
    int pivot = pivotElement(size, arr);
    if (key>=arr[pivot] && key<=arr[size-1])
    {
        ans = binarySearch(arr,pivot,size-1,key);
        cout<<ans;
    }
    
    else
    {
       ans = binarySearch(arr,0,pivot-1,key);
       cout<<ans;
    }
    
    return 0;
}