//1866A.Ambitious Kid
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=*min_element(arr.begin(),arr.begin());
    cout<<mini<<endl;
}