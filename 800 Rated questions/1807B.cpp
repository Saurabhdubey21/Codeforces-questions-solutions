//1807B. Grab the Candies
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            evensum+=arr[i];
        }else{
            oddsum+=arr[i];
        }
    }
    if(evensum>oddsum){
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