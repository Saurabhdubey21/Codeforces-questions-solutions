//2231B.Another Sorting Problem
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>sorted=arr;
    sort(sorted.begin(),sorted.end());
    set<int>difference;
    for(int i=0;i<n;i++){
        int diff=sorted[i]-arr[i];
        difference.insert(diff);
    }
    bool isposs=false;
    if(difference.size()==1){
        long long diff=*difference.begin();
        if(diff>=0){
            isposs=true;
        }
    }else if(difference.size()==2){
        int first=*difference.begin();
        int second=*difference.rbegin();
        if(first==0&&second>0){
            isposs=true;
        }
    }
    if(isposs){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}