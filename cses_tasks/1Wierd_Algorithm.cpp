#include<bits/stdc++.h>
using namespace std;



void func(long int n){
    cout<<n<<" ";
    while (n>1){
    if(n%2==0){
        n/=2;
    }
    else{
        n=n*3+1;
    }
    cout<<n<<" ";
    }
    // cout<<n;
}

int main(){
    long int x;
    cin>>x;
    func(x);

}
