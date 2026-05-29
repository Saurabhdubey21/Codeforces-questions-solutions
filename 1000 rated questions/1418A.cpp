//1418A. Buying Torches
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x,y,k;
    cin>>x>>y>>k;
    long long need=k*(y+1)-1;
    long long sticksneed=(need+(x-2))/(x-1);
    cout<<sticksneed+k<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}