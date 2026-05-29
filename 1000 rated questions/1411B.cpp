//1411B.Fair Numbers
#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    long long temp=n;
    while(temp){
        long long digit=temp%10;
        if(digit%10!=0&&n%digit!=0){
            return false;
        }
        temp=temp/10;
    }
    return true;
}
void solve(){
    long long n;
    cin>>n;
    while(!check(n)){
        n++;
    }
    cout<<n<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}