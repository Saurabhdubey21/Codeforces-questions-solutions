//https://codeforces.com/problemset/problem/610/A
//610A. Pasha and Stick
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2!=0)cout<<0<<endl;
    else{
        int m=n/2;
        cout<<(m-1)/2<<endl;
    }
}