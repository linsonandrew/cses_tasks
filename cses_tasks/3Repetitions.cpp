#include<bits/stdc++.h>
using namespace std;
int reps(string inp){
    int len=inp.length();
    int result=0;
    int max_curr=1;
    for(int i=1;i<len;i++){
        if(inp[i]==inp[i-1]){
            max_curr++;
        }
        else{
            result=max(result,max_curr);
            max_curr=1;
        }
        
    }
    result=max(result,max_curr);
    return result;
}
int main(){
    string linson;
    cin>>linson;
    cout<<reps(linson);
    

}