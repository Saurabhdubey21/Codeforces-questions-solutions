//13A. Numbers
#include<bits/stdc++.h>
using namespace std;
int getsum(int n,int i){
    int sum=0;
    while(n>0){
        sum+=n%i;
        n=n/i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int total_sum=0;
    for(int i=2;i<n;i++){
        total_sum+=getsum(n,i);
    }
    int totalbase=n-2;
    int g=__gcd(total_sum,totalbase);
    cout<<total_sum/g<<"/"<<totalbase/g;
}