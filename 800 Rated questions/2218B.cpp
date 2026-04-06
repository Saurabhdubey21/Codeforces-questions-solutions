//2218B. The 67th 6-7 Integer Problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(arr[i]);
        }
        int maxi=*max_element(arr.begin(),arr.end());
        int ans=2*maxi-sum;
        cout<<ans<<endl;
    }
}