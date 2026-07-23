//1703B. ICPC Balloons
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>freq(26,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]-'A']++;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            ans+=freq[i]+1;
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
