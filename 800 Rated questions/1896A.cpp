//1896A.A. Jagged Swaps
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]==1)cout<<"Yes\n";
    else cout<<"No\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}