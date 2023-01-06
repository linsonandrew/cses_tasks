#include<bits/stdc++.h>
using namespace std;
string PalindromeReorder(string x){
    long long size =x.size();
    unordered_map<char,int> hmap;
    //map for counting occurences 
    for(long long i=0;i<size;i++){
        hmap[x[i]]++;
    }
    long long oddcount=0;
    char oddChar;
    for(auto j: hmap){
        if(j.second%2!=0){
            oddcount++;
            oddChar= j.first;
        }
    }
    if(oddcount>1 || (oddcount==1 && size%2==0)){
        return "NO SOLUTION";
    }
    else{
        string firsthalf = "";string secondstring = "";
        for(auto j:hmap){
            string temp(j.second/2,j.first);
            firsthalf = firsthalf + temp;
            secondstring = temp + secondstring;
        }
        return (oddcount==1)?(firsthalf+oddChar+secondstring):(firsthalf+secondstring);
    }
}
int main(){
    string input;
    cin>>input;
    cout<<PalindromeReorder(input);
}