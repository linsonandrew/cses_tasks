#include<bits/stdc++.h>
using namespace std;
int TwoKnights(int k){
    int minus=0;
    int places =0;
    int places1=0;
    int rec=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            rec+=1;
            places = 0;
            minus = 0;
            if((i-2)>=0&&(j-1)>=0){
                minus++;
                
            }
            if((i-2)>=0&&(j+1)<k){
                minus++;
                
            }
            if((i+2)<k&&(j+1)<k){
                minus++;
                
            }
            if((i+2)<k && (j-1)>=0){
                minus++;
                
            }
            if((i-1)>=0 && (j+2)<k){
                minus++;
                
            }
            if((i+1)<k&&(j+2)<k){
                minus++;
               
            }
            if((i-1)>=0&&(j-2)>=0){
                minus++;
                
            }
            if((i+1)<k&&(j-2)>=0){
                minus++;
                
            }
            places = k*k - minus -1;
            places1+=places;
        }
    }
    return places1/2;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<TwoKnights(i+1)<<endl;
    }
    
}