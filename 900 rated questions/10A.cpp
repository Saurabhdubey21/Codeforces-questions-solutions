// 10A. Power Consumption Calculation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    vector<int>l(n),r(n);
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }
    int total=0;
    for(int i=0;i<n;i++){
        total +=(r[i]-l[i])*p1;
        if(i<n-1){
            int gap=(l[i+1]-r[i]);
            int normal_screen=min(gap,t1);
            gap=gap-normal_screen;
            int screen_saver=min(gap,t2);
            gap=gap-screen_saver;
            int sleep=gap;
            total+=p1*normal_screen;
            total+=p2*screen_saver;
            total+=p3*sleep;
        }
    }
    cout<<total<<endl;
}