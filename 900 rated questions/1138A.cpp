//1138A. Sushi for Two
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>groups;
        int cnt=1;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i-1])cnt++;
            else{
                groups.push_back(cnt);
                cnt=1;
            }
        }
        groups.push_back(cnt);
        int ans=0;
        for(int i=0;i<groups.size();i++){
            ans=max(ans,2*min(groups[i],groups[i+1]));
        }
        cout<<ans<<endl;
    }
}