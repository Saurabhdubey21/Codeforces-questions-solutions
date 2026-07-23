//1784 A. Monsters (easy version)
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    long long pref=0;
    long long ans=LLONG_MAX;
    for(int i=0;i<n;i++){
        long long rem=sum-pref-arr[i];
        long long cost=(arr[i]-1)+rem-1ll*(n-i-1)*arr[i];
        ans=min(ans,cost);
        pref+=arr[i];
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