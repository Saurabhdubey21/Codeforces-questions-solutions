//2233A. AI Project Development
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    int withoutai=(n+x+y-1)/(x+y);
    int withai;
    if(n<=x*z){
        withoutai=(n+x-1)/x;
    }else{
        int rem=n-z*x;
        withai=z+(rem+(x+10*y)-1)/(x+10*y);
    }
    cout<<min(withoutai,withai)<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}