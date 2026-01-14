//1955A. Yogurt Sale
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--){
        int n,a,b;
        cin >>n>>a>>b;
        int cost = (n/2)*min(2*a,b);
        if (n%2==1) {
            cost +=a;
        }
        cout<<cost<< endl;
    }
    return 0;
}