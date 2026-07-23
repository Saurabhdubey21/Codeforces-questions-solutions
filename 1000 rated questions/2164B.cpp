//2164 B. Even Modulo Pair
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>odd;
    vector<long long>even;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            even.push_back(x);
        }else{
            odd.push_back(x);
        }
    }
    if(even.size()>=2){
        cout<<even[0]<<" "<<even[1]<<endl;
        return;
    }
    if(odd.size() >= 2){
        cout << odd[0] << " " << odd[1] << "\n";
        return;
    }
    if(even.size()==1){
        for(int i=0;i<odd.size();i++){
            long long a=min(even[0],odd[i]);
            long long b=max(even[0],odd[i]);
            if((b%a)%2==0){
                cout<<a<<" "<<b<<endl;
                return;
            }
        }
    }
    sort(odd.begin(),odd.end());
    for(int i=0;i+1<odd.size();i++){
        if((odd[i+1]%odd[i])%2==0){
            cout<<odd[i]<<" "<<odd[i+1]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}