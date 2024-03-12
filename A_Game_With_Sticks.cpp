//  A. Game With Sticks

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    bool a=1;
    while (n!=0 and m!=0){
        a=!a;
        n--;
        m--;
    }
    if(a==0) cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;
    return 0;
}
