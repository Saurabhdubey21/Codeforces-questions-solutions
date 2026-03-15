//16B. Burglar and Matches
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v(m);
    for(int i=0;i<m;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),compare);
    int ans=0;
    for(int i=0;i<m;i++){
        if(n==0)break;
        int take=min(n,v[i].first);
        ans+=take*v[i].second;
        n-=take;
    }
    cout<<ans;
}