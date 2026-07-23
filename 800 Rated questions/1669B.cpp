//1669 B. Triple
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>freq(n+1,0);
    int ans=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
        if(freq[x]<=3){
            ans=x;
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