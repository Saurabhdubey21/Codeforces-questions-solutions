//2227 A. Koshary
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(x%2==0&&y%2==0){
        cout<<"Yes\n";
    }else if(x%2==0&&y%2!=0){
        cout<<"YEs\n";
    }else if(x%2!=0&&y%2==0){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}