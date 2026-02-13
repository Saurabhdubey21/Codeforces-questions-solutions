//2193B. Reverse a Permutation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=0;
        while(l<n&&arr[l]==n-l){
            l++;
        }
        if(l<n){
            int r=l;
            while(r<n&&arr[r]!=n-l){
                r++;
            }
            reverse(arr.begin()+l,arr.begin()+r+1);
        }
        for(int x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}