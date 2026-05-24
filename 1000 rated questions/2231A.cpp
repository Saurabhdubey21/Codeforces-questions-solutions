//2231A.Construct an Array
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<2*i;
        }else{
            cout<<2*i-1;
        }
        if(i<n){
            cout<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}