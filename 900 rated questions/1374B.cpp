//1374B. Multiply by 2, divide by 6
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    int ans=0;
    while(n!=1){
        if(n%6==0){
            ans++;
            n=n/6;
        }else if(n%3==0){
            n=n*2;
            ans++;
        }else{
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}