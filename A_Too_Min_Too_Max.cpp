//  A. Too Min Too Max

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int sum=0;
        int i=v[0];
        int j=v[n-1];
        int k=v[1];
        int l=v[n-2];
        sum=(abs)(i-j)+(abs)(j-k)+(abs)(k-l)+(abs)(l-i);
        cout<<sum<<endl;
    }
    return 0;
}
