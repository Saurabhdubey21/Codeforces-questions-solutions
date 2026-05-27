//2217A. The Equalizer
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2==1){
        cout<<"YES\n";
    }else if((1ll*n*k)%2==0){
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