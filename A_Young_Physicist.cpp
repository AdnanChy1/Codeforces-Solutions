//  A. Young Physicist

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][3];
    int x=0;
    int y=0;
    int z=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        x+=arr[i][0];
        y+=arr[i][1];
        z+=arr[i][2];
    }
    if(x==0 and y==0 and z==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
