#include<iostream>
using namespace std;

void sayDigits(int n, string arr[]){
    if(n == 0){
        return ;
    }
    int lastDigit = n % 10;
    n = n/10;
    sayDigits(n, arr);
    cout << arr[lastDigit];
}

int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter the number: ";
    cin >> n;
    sayDigits(n, arr);
    cout<<endl;
}