//1765E E. Exchange
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a<= b){
            cout<<(n+a-1)/a<<endl;
        }else{
            int ans=1;
            if(n>a){
                ans+=(n-a+(a-b-1))/(a-b);
            }
            cout<<ans<<endl;
        }
    }
}