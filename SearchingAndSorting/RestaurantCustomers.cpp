#include<bits/stdc++.h>
using namespace std;

int Rest(int n,vector<pair<long long,long long>> s){
    sort(s.begin(),s.end());
    int curr=0;
    int maxi=0;
    for(int i=0;i<2*n;i++){
        curr+=s[i].second;
        maxi=max(maxi,curr);
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<pair<long long,long long>> timings;
    long long start,end;
    for(int i=0;i<n;i++){
        cin>>start>>end;
        timings.push_back({start,1});
        timings.push_back({end,-1});
    }
    cout<<Rest(n,timings);
}