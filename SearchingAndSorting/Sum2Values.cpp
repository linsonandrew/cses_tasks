#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> SumTwoVal(int n,long long x,vector<pair<long long,int>> a){
    sort(a.begin(),a.end());
    int low=0,high=n-1;
    long long sum=0;
    pair<long long, long long> s;
    while(high>low){
        sum=a[low].first+a[high].first;
        if(sum>x){high--;}
        else if(sum<x){low++;}
        else{
            s.first = a[low].second+1;
            s.second = a[high].second+1;
            if(s.first>s.second){
                sum=s.first;
                s.first=s.second;
                s.second=sum;
            }
            return s;
        }
    }
    s.first = -1;
    s.second=-1;
    return s;

}
int main(){
    int n;
    long long x;
    cin>>n>>x;
    // long long a[n];
    vector<pair<long long,int>> a; 
    for(int i=0;i<n;i++){
        long long temp=0;
        cin>>temp;
        a.push_back({temp,i});
    }
    pair<long long,long long> s = SumTwoVal(n,x,a);
    if(s.first ==-1){
        cout<<"IMPOSSIBLE";
    }
    else{
        cout<<s.first<<" "<<s.second<<endl;
    }
    
}