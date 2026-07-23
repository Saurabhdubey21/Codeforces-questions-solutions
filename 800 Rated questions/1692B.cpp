//1692 B. All Distinct
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int  x;
        cin>>x;
        s.insert(x);
    }
    int dis=s.size();
    int ext=n-dis;
    if(ext%2==0){
        cout<<dis<<endl;
    }else{
        cout<<dis-1<<endl;
    }

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}