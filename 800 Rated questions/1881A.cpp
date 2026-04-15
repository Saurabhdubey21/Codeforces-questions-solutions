//1881A. Don't Try to Count
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int cnt=0;
    while(x.size()<=100){
        if(x.find(s)!=string::npos){
            cout<<cnt<<"\n";
            return;
        }
        x=x+x;
        cnt++;
    }
    cout<<-1<<"\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}