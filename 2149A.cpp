//2149A.Be Positive
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int neg_count=0;
        int zero_count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) zero_count++;
            else if(arr[i] ==-1) neg_count++;
        }
        int step= zero_count;
        if(neg_count %2==1){
        step += 2;
        }
        cout<<step<<endl;
    }
}