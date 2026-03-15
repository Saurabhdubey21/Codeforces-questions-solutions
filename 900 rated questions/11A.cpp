//11A.A. Increasing Sequence
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int moves=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i-1]){
            long long required=(arr[i-1]+1)-arr[i];
            long long k=(required+d-1)%d;
            moves+=k;
            arr[i]+=k*d;
        }
    }
    cout<<moves<<endl;
}