#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        char buf[105];
        scanf("%d %s", &n, buf);
        string s(buf);
        vector<vector<int>> reach(n, vector<int>(n, 0));
        vector<vector<int>> minlen(n, vector<int>(n, 0));
        for(int i=0;i<n;i++){
            reach[i][i] = 1 << (s[i]-'0');
            minlen[i][i] = 1;
        }
        for(int len=2; len<=n; len++){
            for(int i=0;i+len-1<n;i++){
                int j=i+len-1;
                int mask=0;
                for(int k=i;k<j;k++){
                    mask |= (reach[i][k] & reach[k+1][j]);
                }
                reach[i][j]=mask;
                if(mask!=0){
                    minlen[i][j]=1;
                }else{
                    int best=INT_MAX;
                    for(int k=i;k<j;k++){
                        best=min(best,minlen[i][k]+minlen[k+1][j]);
                    }
                    minlen[i][j]=best;
                }
            }
        }

        printf("%d\n", minlen[0][n-1]);
    }
    return 0;
}