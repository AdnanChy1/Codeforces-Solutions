//  A. Candy Bags

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a;
    for (int i = 1; i <= n * n; ++i) {
        a.push_back(i);
    }
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=n/2 ; ++j) {
            cout<<a.front()<<" ";
            cout<<a.back()<<" ";
            a.erase(a.begin()+0);
            a.pop_back();
        }
        cout<<endl;
    }
    return 0;
}
