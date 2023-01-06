#include<bits/stdc++.h>
using namespace std;
long NumberSpriral(long x,long y){
    //function :
    long res = pow((max(x,y)-1),2);
    if(max(x,y)%2==0){
        if(x>y){
            res=res+x+(max(x,y)-y);
        }
        else if(x<y){
            res = res+ x ;
        }
        else{
            res = res+y;
        }
    }
    else{
        if(x>y){
            res=res+y;
        }
        else if(x<y){
            res = res+ y + (max(x,y)-x);
        }
        else{
            res = res+y;
        }
    }
    return res;
}
int main(){
    long x;long y;
    // form a loop of test cases :
    int n;
    cin>>n;
    long arr[n][2];
    for(int i=0;i<n;i++){
        cin>>x>>y;
        arr[i][0]=x;
        arr[i][1]=y;
    }
    for(int i=0;i<n;i++){
        cout<<NumberSpriral(arr[i][0],arr[i][1])<<endl;
    }
}