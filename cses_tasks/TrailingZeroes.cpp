#include<bits/stdc++.h>
using namespace std;
int Two(long long x){
    int count=0;
    while(x%2==0){
        count++;
        x/=2;
    }
    return count;
}
int Five(long long x){
    int count=0;
    while(x%5==0){
        count++;
        x/=5;
    }
    return count;
}
long long TrailingZeroes(long long x){
    int Tot_twos = 0;
    int Tot_fives = 0;
    for(long long i=x;i>0;i--){
        // int twos = Two(i);
        int fives =Five(i);
        Tot_fives+=fives;
        // Tot_twos+=twos;
    }
    // return min(Tot_fives,Tot_twos) ;
    return Tot_fives;
}
int main(){
    long long n;
    cin>>n;
    cout<<TrailingZeroes(n);

}