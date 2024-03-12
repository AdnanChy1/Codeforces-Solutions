//  A. Candies and Two Sisters

#include<bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
    while (t--){
        int n;
        cin>>n;
        int result=0;
        if(n==1 or n==2){
            cout<<0<<endl;
        }
        else if(n%2==0){
            result=(n/2)-1;
            cout<<result<<endl;
        }
        else if(n%2==1){
            result=n/2;
            cout<<result<<endl;
        }
    }
    return 0;
}
