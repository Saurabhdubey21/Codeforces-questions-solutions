//1878C. Vasilije in Cacak
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k,x;
    cin>>n>>k>>x;
    if(k>x){
        cout<<"NO\n";
        return;
    }
    long long maxsum=k*(2*n-k+1)/2;
    long long minsum=k*(k+1)/2;
    if(x>=minsum&&x<=maxsum){
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