#include<bits/stdc++.h>
using namespace std;
int Distinct_Numbers(long long arr[],int n){
    sort(arr,arr+n);
    int count =1;
    long long temp=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]!=temp){
            count++;
            temp=arr[i];
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Distinct_Numbers(arr,n);
}