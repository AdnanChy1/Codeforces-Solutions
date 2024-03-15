//  B. Drinks

#include<bits/stdc++.h>

using namespace std;

int main() {
     int n;
     cin>>n;
     int arr[n];
     float sum=0;
     float ans;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        sum+=arr[i];
    }
    ans=sum/n;
    cout<<ans<<endl;
    return 0;
}
