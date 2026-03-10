//22AA. Second Order Statistics
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=*min_element(arr.begin(),arr.end());
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>mini){
            ans=min(ans,arr[i]);
        }
    }
    if(ans==INT_MAX){
        cout<<"NO\n";
    }else{
        cout<<ans<<endl;
    }
}