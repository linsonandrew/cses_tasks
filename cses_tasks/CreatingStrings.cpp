#include<bits/stdc++.h>
using namespace std;
void CreatingStrings(string s,int ind,set<string> &res){
    if(ind==s.size()){
        res.insert(s);
        return;
    }
    else{
        for(int i=0;i<s.size();i++){
            swap(s[ind],s[i]);
            CreatingStrings(s,ind+1,res);
            swap(s[i],s[ind]);
        }
    }
}
int main(){
    string s;
    cin>>s;
    set<string> res ;
    CreatingStrings(s,0,res);
    cout<<res.size()<<endl;
    for(auto itr:res){
        cout<<itr<<endl;
    }
}