//1732A.bestie
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a, int n){
    int g=a[0];
    for(int i=1;i<n;i++){
        g=__gcd(g,a[i]);
    }
    if(g==1)return 0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int current=a[i];
        int cost=0;
        for(int j=i;j<n;j++){
            current=__gcd(current,j+1);
            cost+=(n-j);
            if(current==1){
                ans=min(ans,cost);
                break;
            }
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int result=solve(a,n);
        cout<<result<<endl;
    }
}