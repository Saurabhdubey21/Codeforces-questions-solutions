//F. Digits Summation
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long sum=0;
    sum+=(n%10)+(m%10);
    cout<<sum<<endl;
    return 0;
}