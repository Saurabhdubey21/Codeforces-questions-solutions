//1744C.Traffic Light
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0 <<endl;
            continue;
        }
        string temp=s+s;
        int next_g=-1;
        int ans=0;
        for(int i=2*n-1;i>=0;i--){
            if(temp[i]=='g'){
                next_g=i;
            }
            if(i<n&&temp[i]==c){
                ans=max(ans,next_g-i);
            }
        }
        cout<<ans<<endl;
    }
}