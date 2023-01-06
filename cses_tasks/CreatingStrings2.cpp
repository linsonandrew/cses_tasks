#include<bits/stdc++.h>
using namespace std;


void CreatingStrings(string s,set<string> &res){
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length();j++){
            swap(s[i],s[j]);
            auto pos= res.find(s);
            if(pos==res.end()){
                res.insert(s);
            }
            swap(s[j],s[i]);
        }
    }
}
int main(){
    string s;
    cin>>s;
    set<string> res ;
    CreatingStrings(s,res);
    for(auto itr:res){
        cout<<itr<<endl;
    }
}