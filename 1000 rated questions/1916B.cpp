//1916B. Two Divisors
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b;
    cin>>a>>b;
    long long x;
    if(b%a==0){
        x=b*(b/a);
    }else{
        long long g=__gcd(a,b);
        x=(a/g)*b; 
    }
    cout<<x<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}