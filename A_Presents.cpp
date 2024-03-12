//  A. Presents

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n+1];
    int arr[n+1];
    for (int i = 1; i < n+1; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <n+1 ; ++i) {
        for (int j = 1; j <n+1 ; ++j) {
            if(i==a[j]){
                arr[i]=j;
                break;
            }
        }
    }
    for (int i = 1; i <n+1 ; ++i) {
        cout<<arr[i]<<" ";
    }
        return 0;
}
