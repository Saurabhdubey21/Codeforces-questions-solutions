//A. Chips
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int round=n*(n+1)/2;
    int rem_chips=m%round;
    int i=1;
    while(rem_chips>=i){
        rem_chips=rem_chips-i;
        i++;
    }
    cout<<rem_chips<<endl;
}