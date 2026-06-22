//2154A. Notelock
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>pos;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            pos.push_back(i);
        }
    }
    if(pos.empty()){
        cout<<0<<endl;
        return;
    }
    int ans=1;
    for(int i=1;i<pos.size();i++){
        if(pos[i]-pos[i-1]>=k){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}