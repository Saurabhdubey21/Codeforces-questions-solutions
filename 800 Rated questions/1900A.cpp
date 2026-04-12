//1900A. Cover in Water
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int totaldots=0;
    bool moredotsthanthree=false;
    while(i<n){
        if(s[i]=='#'){
            i++;
            continue;
        }
        int len=0;
        while(i<n&&s[i]=='.'){
            len++;
            i++;
        }
        totaldots+=len;
        if(len>=3){
            moredotsthanthree=true;
        }
    }
    if(totaldots==0)cout<<0<<endl;
    else if(moredotsthanthree)cout<<2<<endl;
    else cout<<totaldots<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}