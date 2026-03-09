//381A.Sereja and Dima
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int left=0,right=n-1;
        int srija=0,dima=0;
        for(int move=0;left<=right;move++){
            int pick;
            if(arr[left]>arr[right]){
                pick=arr[left];
                left++;
            }else{
            pick=arr[right];
            right--;
        }
        if(move%2==0){
            srija+=pick;
        }else{
            dima+=pick;
        }
    }
    cout<<srija<<" "<<dima<<endl;
}