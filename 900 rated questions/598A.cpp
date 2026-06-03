//598A.Tricky Sum
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long total=n*(n+1)/2;
    long long sumpower=0;
    long long p=1;
    while(p<=n){
        sumpower+=p;
        p=p<<1;
    }
    cout<<total-2*sumpower<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}