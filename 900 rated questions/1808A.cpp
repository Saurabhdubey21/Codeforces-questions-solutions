//1808A. Lucky Numbers
#include<bits/stdc++.h>
using namespace std;
int diff(int x){
    int maxi=0;
    int mini=9;
    while(x){
        int d=x%10;
        maxi=max(maxi,d);
        mini=min(mini,d);
        x=x/10;
    }
    return maxi-mini;
}
void solve(){
    int l,r;
    cin>>l>>r;
    int ans=l;
    int best=diff(l);
    for(int i=l;i<=max(l,r);i++){
        int curr=diff(i);
        if(curr>best){
            best=curr;
            ans=i;
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