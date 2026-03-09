//D. Range Sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        if(n>m)swap(n,m);
        long long sum=(m*(m+1)/2)-(n*(n-1)/2);
        cout<<sum<<endl;
    }
}