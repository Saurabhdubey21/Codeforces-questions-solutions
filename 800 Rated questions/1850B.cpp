//1850B. Ten Words of Wisdom
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=-1;
        int max_quality=-1;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a<=10&&b>max_quality){
                max_quality=b;
                ans=i+1;
            }
        }
        cout<<ans<<endl;
    }
}