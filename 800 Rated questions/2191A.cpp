//2191A. Array Coloring
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({arr[i], i});
        }
        sort(v.begin(), v.end());
        bool ok = true;
        for (int i = 1; i < n; i++) {
            if ((v[i].second % 2) == (v[i-1].second % 2)) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}