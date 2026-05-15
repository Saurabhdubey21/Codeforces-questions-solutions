//1256A. Payment Without Change
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,n,s;
    cin>>a>>b>>n>>s;
    int x=min(a,s/n);
    int rest=s-(x*n);
    if(rest<=b){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}