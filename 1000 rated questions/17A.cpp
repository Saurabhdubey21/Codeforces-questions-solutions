//17 A. Noldbach problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<bool>isprime(n+1,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    vector<int>primes;
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
    int cnt=0;
    for(int i=0;i<primes.size();i++){
        int x=primes[i]+primes[i+1]+1;
        if(x<=n&&isprime[x]){
            cnt++;
        }
    }
    if(cnt>=k){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}