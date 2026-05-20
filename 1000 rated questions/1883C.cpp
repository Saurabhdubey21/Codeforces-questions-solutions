//1883C. Raspberries
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int reqops=k;
    if(k==4){
        int evencnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0)evencnt++;
            int rem=arr[i]%4;
            if(rem==0){
                reqops=0;
            }else{
                reqops=min(reqops,4-rem);
            }
        }
        int reqeven=max(0,2-evencnt);
        reqops=min(reqops,reqeven);
    }else{
        for(int i=0;i<n;i++){
            int rem=arr[i]%k;
            if(rem==0){
                reqops=0;
                break;
            }
            reqops=min(reqops,k-rem);
        }
    }
    cout<<reqops<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}