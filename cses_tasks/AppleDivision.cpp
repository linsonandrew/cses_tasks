#include<bits/stdc++.h>
#include<cstdlib>
#define maax LLONG_MAX
using namespace std;
#define lonmax LONGLONGMAX ;
long long Apple(long long arr[],int n,int lvl,long long currdiff,long long m1,long long m2){
    if(lvl==n){
        // currdiff = min(currdiff,m1-m2);
        return abs(m1-m2);
    }
    else{
        // Apple(arr,n,lvl+1,currdiff,m1+arr[lvl],m2);
        // Apple(arr,n,lvl+1,currdiff,m1,m2+arr[lvl]);
        return min(Apple(arr,n,lvl+1,currdiff,m1+arr[lvl],m2),Apple(arr,n,lvl+1,currdiff,m1,m2+arr[lvl]));
    }
    return currdiff;
}
int main(){
    int n;
    cin>>n;
    long long arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Apple(arr,n,0,maax,0,0);
}