#include<bits/stdc++.h>
using namespace std;

int FerrisWheel(int n,long long x,long long arr1[]){
    int res=0;
    int high=n-1;
    int low=0;
    sort(arr1,arr1+n);
    while(high>low){
        if((arr1[low]+arr1[high])<=x){
            low++;
            high--;
            res++;
        }
        else{
            high--;
            res++;
        }
    }
    if(high==low){
        res++;
    }
    return res;
}
int main(){
    int n;
    long long x;
    cin>>n>>x;
    long long arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<FerrisWheel(n,x,arr1);
}