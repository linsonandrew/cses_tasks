#include<bits/stdc++.h>
using namespace std;
int Appartments(int n,long long m,long long k,long long arr1[],long long arr2[]){
    int res=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i=0;
    long long j=0;
    while(i<n && j<m){
        if(arr2[j]<=arr1[i]+k && arr2[j]>=arr1[i]-k){
            res++;
            i++;
            j++;
        }
        else{
            if(arr1[i]>arr2[j]){
                j++;
            }
            else{
                i++;
            }
        }
    }
    return res;
}
int main(){
    int n;
    long long m;
    long long k;
    cin>>n>>m>>k;
    long long arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    long long arr2[m];
    for(long long j=0;j<m;j++){
        cin>>arr2[j];
    }
    cout<<Appartments(n,m,k,arr1,arr2);
}