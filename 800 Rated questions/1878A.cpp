//1878A.How Much Does Daytona Cost?
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            found=true;
            break;
        }
    }
    if(found)cout<<"Yes\n";
    else cout<<"No\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}
