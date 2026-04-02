//1851C.C. Tiles Comeback
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
        int left=arr[0];
        int right=arr[n-1];
        if(left==right){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(arr[i]==left)cnt++;
            }
            if(cnt>=k)cout<<"Yes\n";
            else cout<<"No\n";
            continue;
        }
        int leftcnt=0;
        int pos=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==left){
                leftcnt++;
                if(leftcnt==k){
                    pos=i;
                    break;
                }
            }
        }
        if(pos==-1){
            cout<<"No\n";
            continue;
        }
        int rightcnt=0;
        for(int i=n-1;i>pos;i--){
            if(arr[i]==right){
                rightcnt++;
            }
        }
        if(rightcnt>=k)cout<<"Yes\n";
        else cout<<"No\n";
    }
}