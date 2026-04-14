//1890A. Doremy's Paint 3
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    if(freq.size()>=3)cout<<"No\n";
    else{
        int freq1=freq.begin()->second;
        int freq2=freq.rbegin()->second;
        if(freq1==freq2){
            cout<<"Yes\n";
        }else if(n%2==1&&abs(freq1-freq2)<=1){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}