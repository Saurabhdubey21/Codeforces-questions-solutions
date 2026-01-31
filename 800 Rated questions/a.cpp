#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,s;;
        cin>>n>>x>>s;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int req=s-sum;
        if(req>=0 && req%x ==0){
            cout<<"yes\n";
        }else{
            cout<<"No\n";
        }
    }
}