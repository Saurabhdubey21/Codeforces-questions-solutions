//1765E E. Exchange
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,a,b;
    cin>>n>>a>>b;
    if(a<=b){
        cout<<(n+a-1)/a<<endl;
    }else{
        if(n<=a){
            cout<<1<<endl;
        }else{
            cout<<(n-a+(a-b)-1)/(a-b)<<endl;
        }
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}