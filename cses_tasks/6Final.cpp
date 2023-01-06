#include<bits/stdc++.h>
using namespace std;
long long int NumberSpriral(long long int  x,long long int  y){
    //function :
    long long int  res = pow((max(x,y)-1),2);
    if(max(x,y)%2==0){
        if(x>y){
            res=res+x+(max(x,y)-y-1);
        }
        else if(x<y){1
            res = res+ x ;
        }
        else{
            res = res+y+1;
        }
    }
    else{
        if(x>y){
            res=res+y;
        }
        else if(x<y){
            res = res+ y + (max(x,y)-x-1);
        }
        else{
            res = res+y+1;
        }
    }
    return res;
}
int main(){
    long long int  x;long long int  y;
    // form a loop of test cases :
    int n;
    cin>>n;
    long long int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>x>>y;
        arr[i][0]=x;
        arr[i][1]=y;
    }
    for(int i=0;i<n;i++){
        cout<<NumberSpriral(arr[i][0],arr[i][1])<<endl;
    }
}