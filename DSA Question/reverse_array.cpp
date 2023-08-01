#include <iostream> 
using namespace std;


int main()
{
    int arr[5] = {5,7,8,6,9};
	int size = sizeof(arr)/sizeof(int);
	int start = 0;
	int end = size-1;
	while(start<end){
		swap(arr[start], arr[end]);
        start = start+1;
        end = end-1;
	}
    cout<<"The reverse array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}
