//2218C. The 67th Permutation Problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int waste=i+1;
            int med=n+2*i+1;
            int mx=n+2*i+2;
            cout<<waste<<" "<<med<<" "<<mx;
            if (i < n-1)cout<<" ";
        }
        cout<<"\n";
    }
}