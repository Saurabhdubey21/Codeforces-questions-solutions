//1859A. United We Stand
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=*max_element(arr.begin(),arr.end());
    vector<int>b,c;
    for(int i=0;i<n;i++){
        if(arr[i]=maxi){
            b.push_back(arr[i]);
        }else{
            c.push_back(arr[i]);
        }
    }
    if(b.size()==0){
        cout<<-1<<endl;
        return;
    }else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto it:b){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it:c){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}