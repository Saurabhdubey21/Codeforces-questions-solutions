//2151A.Incremental Subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        bool fav=true;
        for(int i=0;i<m;i++){
            if(arr[i]!=i+1){
                fav=false;
                break;
            }
        }
        if(fav){
            cout<<n-m+1<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}