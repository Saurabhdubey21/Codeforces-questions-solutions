//1676 B. Equal Candies
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>mini){
            mini=min(arr[i],mini);
        }
        sum+=arr[i]-mini;
    }
    cout<<sum<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}