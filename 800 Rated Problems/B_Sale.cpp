//  B. Sale

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[n];
    int b;
    int sum=0;
   vector<int>v;
    for (int i = 0; i < n; ++i) {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < m; ++i) {
        b= v[i];
//        cout<<b<<endl;
        if(b<0)
        sum=sum+abs(b);
        else
            break;
//        for(auto it:v) cout<<it<<" ";
//        cout<<endl;
    }
    cout<<sum<<endl;
    return 0;
}
