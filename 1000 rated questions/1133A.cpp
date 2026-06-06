//1133A.Middle of the Contest
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int h1,m1;
    char ch;
    cin>>h1>>ch>>m1;
    int h2,m2;
    cin>>h2>>ch>>m2;
    int start=h1*60+m1;
    int end=h2*60+m2;
    int mid=(start+end)/2;
    int mid_hour=mid/60;
    int mid_min=mid%60;
    cout<<setw(2)<<setfill('0')<< mid_hour<<":"
    <<setw(2)<<setfill('0')<<mid_min<<'\n';
}
int main(){
    solve();
}