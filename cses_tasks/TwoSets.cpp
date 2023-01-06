#include<bits/stdc++.h>
using namespace std;
vector<vector<long long>> TwoSets(long long n){
    vector<vector<long long>> a;
    if(n%2==0){
        long long high=n;
        long long low = 1;
        while(high>low){
            a[0].push_back(high);
            a[1].push_back(low);
            high--;
            low++;
            a[0].push_back(high);
            a[1].push_back(low);
            high--;
            low++;
        }
    }
    else{
        a[1].push_back(n);
        long long high=n-1;
        long long low = 1;
        while(high>low){
            a[0].push_back(high);
            a[1].push_back(low);
            high--;
            low++;
            a[0].push_back(high);
            a[1].push_back(low);
            high--;
            low++;
        }
    }
    return a;
}
int main(){
    long long n;
    cin>>n;
    if((n*(n+1)%2==0)){
        cout<<"YES"<<endl;
        vector<vector<long long>> a = TwoSets(n);
        cout<<a[0].size()<<endl;
        sort(a[0].begin(),a[0].end());
        for(long long i=0;i<a[0].size();i++){
            cout<<a[0][i]<<endl;
        }
        cout<<a[1].size()<<endl;
        sort(a[1].begin(),a[1].end());
        for(long long i=0;i<a[1].size();i++){
            cout<<a[1][i]<<endl;
        }
    }
    else{
        cout<<"NO";
    }
}