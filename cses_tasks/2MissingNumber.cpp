#include<bits/stdc++.h>
using namespace std;

long long func(long long x,vector<long long> a){
    sort(a.begin(),a.end());
    long long low=0;long long high=a.size()-1;
    long long m = low + (high-low)/2;
    if((a.size()-1)>1){
        while(!(a[m]==m+1 && a[m+1]!=m+2)){
        if(a[m]==m+1){
            // m+=1;
            low=m+1;
        }
        else{
            high=m-1;
        }
        m = low + (high-low)/2;
    }
    return m+2;
    }
    else{
        if(a[0]==1){
            return 2;
        }
        else{
            return 1;
        }

        
    }
    
}
int main(){
    long long x;
    cin>>x;
    long long y;
    vector <long long> a;
    for(long long i=0;i<x-1;i++){
        cin>>y;
        a.push_back(y);
    }
    cout<<func(x,a);

}