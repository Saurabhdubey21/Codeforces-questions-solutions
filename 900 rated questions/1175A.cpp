//1175A. From Hero to Zero
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    long long cnt=0;
    while(n>0){
        if(k>n){
            cnt+=n;
            break;
        }
        if(n%k==0){
            n=n/k;
            cnt++;
        }else{
            cnt+=n%k;
            n-=n%k;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}