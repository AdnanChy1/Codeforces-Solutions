//  A. I Wanna Be the Guy

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n ;
    cin>>n;
    int p;
    cin>>p;
    int a[p];
    int flag=0;
    for (int i = 0; i < p; ++i) {
        cin>>a[i];
    }
    int q;
    cin>>q;
    int b[q];
    for (int i = 0; i < q; ++i) {
        cin>>b[i];
    }
    set<int>s;
    for (int i = 0; i < p; ++i) {
        s.insert(a[i]);
    }
    for (int i = 0; i < q; ++i) {
        s.insert(b[i]);
    }
    set<int>s2;
    for (int i = 1; i <= n; ++i) {
        s2.insert(i);
    }
    if (s==s2) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
