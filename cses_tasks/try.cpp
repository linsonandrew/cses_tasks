#include<bits/stdc++.h>
using namespace std;
void swap(string &s,int a,int b){
    char temp = s[a];
    s[a] = s[b];
    s[b]=temp;
}
int main(){
    string s = "sbc";
    swap(s,s[1],s[2]);
    cout<<s;
}