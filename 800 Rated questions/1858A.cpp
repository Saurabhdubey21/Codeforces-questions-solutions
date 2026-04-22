//1858A. Buttons
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int anna=a+(c+1)/2;
    int katie=b+c/2;
    if(anna>katie)cout<<"First\n";
    else cout<<"Second\n";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}