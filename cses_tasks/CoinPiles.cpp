#include<bits/stdc++.h>
using namespace std;
string CoinPiles(long long arr[2]){
    long long a = arr[0];
    long long b = arr[1];
    if((a+b)%3==0 && min(a,b)>=(a+b)/3){
        return "YES";
    }
    else{
        return "NO";
    }
}
int main(){
    int t;
    cin>>t;
    long long arr[t][2];
    for(int i=0;i<t;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    for(int i=0;i<t;i++){   
        cout<<CoinPiles(arr[i])<<endl;
    }
}