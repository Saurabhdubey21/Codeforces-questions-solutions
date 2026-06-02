//71A. Way Too Long Words
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    if(n<=10){
        cout<<s<<endl;
    }else{
        int cnt=n-2;
        cout<<s[0]<<cnt<<s[n-1]<<endl;
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}