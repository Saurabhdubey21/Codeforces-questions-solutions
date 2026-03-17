//1343A A. Candies
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        for(int k=2;k<=30;k++){
            int sum=(1ll<<k)-1;
            if(n%sum==0){
                cout<<n/sum<<endl;
                break;
            }
        }
    }
}