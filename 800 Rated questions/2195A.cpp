//2195A. Sieve of Erato67henes
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool found=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==67){
                found=true;
            }
        }
        if(found)cout<<"Yes\n";
        else cout<<"NO\n";
    }
}