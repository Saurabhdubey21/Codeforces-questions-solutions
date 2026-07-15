//1849 B. Monsters
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long,int>a,pair<long long ,int>b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<pair<long long,int>>v;
    for(int i=1;i<=n;i++){
        long long x;
        cin>>x;
        long long rem=x%k;
        if(rem==0){
            rem=k;
        }
        v.push_back({rem,i});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" ";
    }
    cout<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}