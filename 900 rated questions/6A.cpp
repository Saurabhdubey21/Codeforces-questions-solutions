//6A. Triangle
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr(4);
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    bool triangle=false,segment=false;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<4;k++){
                if(arr[i]+arr[j]>arr[k])triangle=true;
                else if(arr[i]+arr[j]==arr[k])segment=true;
            }
        }
    }
    if(triangle)cout<<"TRIANGLE\n";
    else if(segment)cout<<"SEGMENT\n";
    else cout<<"IMPOSSIBLE\n";
}