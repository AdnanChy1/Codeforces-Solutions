//  A. Beautiful Matrix

#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[5][5];
    int row=0;
    int col=0;
    int ans=0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if(a[i][j]==1){
                row=i+1;
                col=j+1;
            }
        }
    }
    ans= abs(3-row)+ abs(3-col);
    cout<<ans<<endl;
    return 0;
}
