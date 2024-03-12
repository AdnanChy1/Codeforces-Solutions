//  A. Even Odds

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int n,k;
    cin>>n>>k;
    long long int mid=0;
    long long int ans=0;
    if(n%2==0)
        mid=n/2;
    else mid=(n/2)+1;
    if(k<=mid)
        ans=((k-1)*2)+1;
    else if(k>mid){
        k=k-mid;
        ans=k*2;
    }
    cout<<ans<<endl;
    return 0;
}
