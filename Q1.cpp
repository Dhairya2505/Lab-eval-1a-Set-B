#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec;

    for(int i=0;i<5;i++){
        int n;
        cout << "Enter cooficient "<< i+1 << " : " ;
        cin >> n;
        vec.push_back(n);
    }

    string poly = "";

    if(vec[0] != 0){
        poly = poly + to_string(vec[0]*5) + "x^4";
    }
    if (vec[1] != 0){
        poly = poly+ " + " + to_string(vec[1]*4) + "x^3";
    }
    if (vec[2] != 0){
        poly = poly + " + " + to_string(vec[2]*3) + "x^2";
    }
    if (vec[3] != 0){
        poly = poly + " + " + to_string(vec[3]*2) + "x";
    }
    if (vec[4] != 0){
        poly = poly + " + " + to_string(vec[4]*1);
    }

    cout << poly;
    return 0;
}
