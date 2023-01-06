#include<bits/stdc++.h>
using namespace std;
long long TwoKnights(long long k){
    return ((k*k)*(k*k-1))/2 - 4*(k-1)*(k-2);
}
int main(){
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++){
        cout<<TwoKnights(i+1)<<endl;
    }
}