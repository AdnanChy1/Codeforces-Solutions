//  A. Puzzles

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for (int i = 0; i < m; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int value=1e9;
    for (int i = 0; i <= m-n; ++i) {
            if(value>v[i+n-1]-v[i])
                value=v[i+n-1]-v[i];
        }
    cout<<value<<endl;
    return 0;
}
