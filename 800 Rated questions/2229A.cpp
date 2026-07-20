//2229 A. Slimes on a Line
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=max(maxi,arr[i]);
        }
        if(arr[i]<mini){
            mini=min(mini,arr[i]);
        }
    }
    int mid=(maxi+mini+2-1)/2;
    ans=mid-mini;
    cout<<ans<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}