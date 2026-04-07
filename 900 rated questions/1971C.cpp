//1971C. Clock and Strings
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>b){
            swap(a,b);
        }
        int cnt=0;
        if(c>a&&c<b)cnt++;
        if(d>a&&d<b)cnt++;
        if(cnt==1)cout<<"Yes\n";
        else cout<<"No\n";
    }
}
