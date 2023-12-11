#include<iostream>
#include<vector>
using namespace std;

// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i = 2; i<n;i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

int main(){
    int n = 40;
    int count = 0;
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i<n;i++){
        if(prime[i]){
            count++;
            for(int j=i*2;j<n;j=j+i){
                prime[j] = 0;
            }
        }
    }
    cout<< count;
    // cout << "Enter a number";
    // cin >> n;
    // if(isPrime(n)){
    //     cout << "Number is prime";
    // }
    // else{
    //     cout << "number is not prime";
    // }
}