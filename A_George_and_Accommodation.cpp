//  A. George and Accommodation

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][2];
    int free=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
            if(arr[i][0]+2<=arr[i][1])
                free++;
            else continue;
        }
    cout<<free<<endl;
    return 0;
    }

