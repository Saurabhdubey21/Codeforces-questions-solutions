//2102 A. Dinner Time
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    if(n%p==0){
        if((n/p)*q==m){
            cout<<"yes"<<endl;
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"No\n";
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}