//1203A. Circle of Students
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool clockwise=true;
    bool counter=true;
    for(int i=0;i<n;i++){
        int next=arr[i+1]%n;
        if(next!=arr[i]%n+1){
            clockwise=false;
        }
        int expected=arr[i]-2+n%n+1;
        if(next!=expected){
            counter=false;
        }
    }
    if(clockwise||counter){
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