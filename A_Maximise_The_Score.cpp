//  A. Maximise The Score

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>v(2*n);
        int min=0;
        for (int i = 0; i < 2 * n; ++i) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < 2*n-1; i+=2) {
            if (v[i]>v[i+1])
                min+=v[i+1];
            else min+=v[i];
        }
        cout<<min<<endl;

    }
    return 0;
}
