//1742A.sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mini=min(a,min(b,c));
        int maxi=max(a,max(b,c));
        int need=maxi-mini;
        if(need==a||need==b||need==c){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
}