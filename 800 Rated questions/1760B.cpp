//1760B. Atilla's Favorite Problem
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxi=0;
    for(int i=0;i<s.size();i++){
        maxi=max(maxi,s[i]-'A'+1);
    }
    cout<<maxi<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}