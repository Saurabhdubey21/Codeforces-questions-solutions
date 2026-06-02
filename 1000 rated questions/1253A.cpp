//1253A. Single Push
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    bool ok=true;
    int i=0;
    while(i<n){
        if(b[i]-a[i]<0){
            ok=false;
            break;
        }
        i++;
    }
    if(!ok){
        cout<<"NO\n";
        return;
    }
    i=0;
    while(i<n && b[i]-a[i]==0){
        i++;
    }
    if(i==n){
        cout<<"YES\n";
        return;
    }
    int k=b[i]-a[i];
    while(i<n && b[i]-a[i]==k){
        i++;
    }
    while(i<n){
        if(b[i]-a[i]!=0){
            ok=false;
            break;
        }
        i++;
    }
    cout<<(ok?"YES":"NO")<<"\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}