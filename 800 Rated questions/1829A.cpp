//1829A. Love Story
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string g="codeforces";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=g[i])cnt++;
        }
        cout<<cnt<<endl;
    }
}