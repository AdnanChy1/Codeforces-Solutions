//  A. Soldier and Bananas

#include<bits/stdc++.h>

using namespace std;

int main() {
     int k,n,w;
     cin>>k>>n>>w;
     int sum=0;
     int borrow=0;
    for (int i = 1; i <= w; ++i) {
        sum=sum+k*i;
    }
    borrow=sum-n;
    if(borrow>0)
    cout<<borrow<<endl;
    else
        cout<<0<<endl;
    return 0;
}
