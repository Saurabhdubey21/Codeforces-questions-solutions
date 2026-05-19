//2124B. Minimise Sum
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=arr[0]+min(arr[0],arr[1]);
    int ans=arr[0]+arr[1];
    int mini_diff=INT_MAX;
    for(int i=2;i<n;i++){
        if(arr[i-1]>=arr[i-2]){
            ans=min(ans,sum);
            break;
        }
        mini_diff=min(mini_diff,arr[i-2]-arr[i-1]);
        ans=min(ans,sum+(min(mini_diff,arr[i])));
    }
    int ans2=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        ans2+=mini;
    }
    cout<<min(ans,ans2)<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}