#include<bits/stdc++.h>
using namespace std;

void Permutations(long long number){
    if(number==1){
        cout<<1;
        return;
    }
    else if(number>1 &&number<4){
        cout<<"NO SOLUTION";
        return;
    }
    else if(number==4){
        cout<<"2 4 1 3";
        return;
    }
    else{
        for(long long i=1;i<=number;i=i+2)
        {
            cout<<i<<" ";
        }
        for(long long i=2;i<=number;i=i+2){
            cout<<i<<" ";
        }
    }
}

int main(){
    int x;
    cin>>x;
    Permutations(x);
}