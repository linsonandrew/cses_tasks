#include<bits/stdc++.h>
using namespace std;
vector<string> GrayCode(int n){
    vector<string> ret{"1","0"};
    for(int i=0;i<n-1;i++){
        int size = ret.size();
        for(int j=size-1;j>=0;j--){
            ret.push_back(ret[j]);
        }
        for(int m = 0;m<size;m++){
            ret[m] = '0'+ret[m];
        }
        for(int n = size;n<2*size;n++){
            ret[n] = '1'+ret[n];
        }
    }
    return ret;
}
int main(){
    int n;
    cin>>n;
    vector<string> a = GrayCode(n);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}