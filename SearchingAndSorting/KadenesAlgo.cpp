#include<bits/stdc++.h>
using namespace std;
long long Kadene(int n,long long a[]){
    long long res=INT32_MIN;
    long long last_max=0;
    for(int i=0;i<n;i++){
        last_max+=a[i];
        res = max(res,last_max);
        if(last_max<0){
            last_max=0;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<Kadene(n,a);
}