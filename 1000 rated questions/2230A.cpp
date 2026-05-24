//2230A. Optimal Purchase
#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long n,a,b;
    cin>>n>>a>>b;
    long long groups=n/3;
    long long rem=n%3;
    long long ans=groups*min(b,3*a)+min(rem*a,b);
    cout<<ans<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}