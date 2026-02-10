//1352A. Sum of Round Numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        int power=1;
        while(n>0){
            int digit=n%10;
            if(digit>0){
                arr.push_back(digit*power);
            }
            n=n/10;
            power=power*10;
        }
        cout<<arr.size()<<endl;
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}