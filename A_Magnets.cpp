//  A. Magnets

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int count=1;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; ++i) {
        if(arr[i]==10 and arr[i+1]==10 or arr[i]==01 and arr[i+1]==01) continue;
        else count++;
    }
    cout<<count<<endl;
    return 0;
    }
