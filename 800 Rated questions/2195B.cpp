//2195B. Heapify 1
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n+1);
        for (int i=1;i<=n;i++){
            cin >> arr[i];
        }
        vector<int>sorted=arr;
        sort(sorted.begin()+1,sorted.end());
        vector<bool>visited(n+1,false);
        bool possible = true;
        for (int i=1;i<=n;i++){
            if (!visited[i]){
                vector<int>idx,cur,target;
                int j=i;
                while(j<=n){
                    visited[j]=true;
                    idx.push_back(j);
                    j=j*2;
                }
                for(int x:idx){
                    cur.push_back(arr[x]);
                    target.push_back(sorted[x]);
                }
                sort(cur.begin(),cur.end());
                sort(target.begin(),target.end());
                if (cur !=target){
                    possible=false;
                    break;
                }
            }
        }
        cout << (possible ?"YES\n":"NO\n");
    }
}
