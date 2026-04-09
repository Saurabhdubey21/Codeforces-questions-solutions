//1903A.Halloumi Boxes
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k==1){
            if(is_sorted(arr.begin(),arr.end())){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }else{
            cout<<"Yes\n";
        }
    }
}