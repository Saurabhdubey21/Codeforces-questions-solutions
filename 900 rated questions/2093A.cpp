//2093AExpensive Number
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    cin>>n;
    int zeros=0;
    int maxikeep=0;
    for(int i=0;i<n.size();i++){
        if(n[i]=='0'){
            zeros++;
        }else{
            maxikeep=max(maxikeep,zeros+1);
        }
    }
    cout<<n.size()-maxikeep<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}