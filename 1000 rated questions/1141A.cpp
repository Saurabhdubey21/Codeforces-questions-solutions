// 1141A. Game 23
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m%n !=0){
        cout<<-1<<endl;
        return 0;
    }
    int steps=0;
    int num=m/n;
    while(num%2==0){
        num=num/2;
        steps++;
    }
    while(num%3==0){
        num=num/3;
        steps++;
    }
    cout<<steps<<endl;
    if (num==1)cout<<steps<<endl;
    else cout<<-1<<endl;
}