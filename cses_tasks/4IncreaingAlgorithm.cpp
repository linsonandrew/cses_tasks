#include<bits/stdc++.h>
using namespace std;

long long incarr(long long a[],int n){
    long long result=0;
    long long curr_max=a[0];
    for(long long i=1;i<n;i++){
        if(a[i]<curr_max){
            result=result+(curr_max-a[i]);
        }
        else{
            curr_max=max(curr_max,a[i]);
        }
    }
    return result;
}
int main(){
    long long len;
    cin>>len;
    long long a[len];
    for(int i=0;i<len;i++){
        cin>>a[i];
    }
    cout<<incarr(a,len);
}
