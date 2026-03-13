// //2171B Yuu Koito and Minimum Absolute Sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==-1&&arr[n-1]==-1){
            arr[0]=0;
            arr[n-1]=0;
        }else if(arr[0]==-1){
            arr[0]=arr[n-1];
        }else if(arr[n-1]==-1){
            arr[n-1]=arr[0];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==-1)arr[i]=0;
        }
        long long ans=llabs(arr[n-1]-arr[0]);
        cout<<ans<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}