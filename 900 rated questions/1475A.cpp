//1475A.Odd Divisor
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    if((n&(n-1))==0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}