#include<bits/stdc++.h>
using namespace std;
#define Mod 1000000007


long long int Bit(long long int x){
    
    // long long int M = 1000000007;
    long long result=1;
    for(int i=0;i<x;i++){
        result=((result % Mod)*2)%Mod;
    }
    return result;
    
}

int main(){
    long long n;
    cin>>n;
    cout<<Bit(n);
}
