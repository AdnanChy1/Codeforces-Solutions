//  A. Vanya and Fence

#include<bits/stdc++.h>

using namespace std;
#define endl '\n'
int main() {
    int n,h;
    cin>>n>>h;
    int a[n];
    int width=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (a[i]>h)
            width=width+2;
        else
            width++;
    }
    cout<<width<<endl;
}
