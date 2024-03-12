//  A. Team
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][3];
    int count=0;
    int decision=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(a[i][j]==1){
                decision++;
            }
        }
        if (decision>=2)count++;
        decision=0;
    }
    cout<<count<<endl;

    return 0;
}
