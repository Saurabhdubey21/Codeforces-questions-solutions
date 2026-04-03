//1950A.Stair, Peak, or Neither?
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b&&b<c)cout<<"stair\n";
        else if(a<b&&b>c)cout<<"peak\n";
        else cout<<"None\n";
    }
}