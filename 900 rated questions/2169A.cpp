//2169A. Alice and Bob
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a;
    cin>>n>>a;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int right_cnt=0,left_cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>a)right_cnt++;
        else if(arr[i]<a)left_cnt++;
    }
    if(right_cnt>=left_cnt){
        cout<<a+1<<endl;
    }else{
        cout<<a-1<<endl;
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}