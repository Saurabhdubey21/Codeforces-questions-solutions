//577A.Multiplication Table
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(x%i==0&&x/i<=n)cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    solve();
}