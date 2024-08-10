#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin >> n;

    if( n == 1){
        cout << "neither prime nor composite";
        exit(1);
    } else if ( n == 2 ){
        cout << n;
        exit(1);
    }

    for(int i=3;i<n;i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

    return 0;
}
