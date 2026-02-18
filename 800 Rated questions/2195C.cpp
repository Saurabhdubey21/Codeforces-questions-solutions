//2195C.Dice roll Sequence
#include <bits/stdc++.h>
using namespace std;
bool isOpposite(int a, int b) {
    if((a==1&&b==6)||(a==6&&b==1))return true;
    if((a==2&&b==5)||(a==5&&b==2))return true;
    if((a==3&&b==4)||(a==4&&b==3))return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> dp(7), new_dp(7);
        for (int v=1;v<=6;v++) {
            if (a[0]==v)
                dp[v]=0;
            else
                dp[v]=1;
        }
        for (int i=1;i<n;i++) {
            for (int v=1;v<=6;v++)
                new_dp[v]=1e9;
            for (int v=1;v<=6;v++){
                for (int p=1;p<=6;p++){
                    if(v==p)continue;
                    if(isOpposite(v,p))continue;
                    int cost=(a[i]==v)?0:1;
                    new_dp[v]=min(new_dp[v],dp[p]+cost);
                }
            }
            dp=new_dp;
        }
        int answer=*min_element(dp.begin()+1,dp.end());
        cout << answer << "\n";
    }
    return 0;
}
