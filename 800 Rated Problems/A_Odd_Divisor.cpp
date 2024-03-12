//  A. Odd Divisor

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        bool flag= false;
        long long int n;
        cin>>n;
        if(n%2==1){
            cout<<"YES"<<endl;
            continue;
        }
        while(n%2!=1){
            n=n/2;
            if(n%2==1 and n!=1){
                flag= true;
                break;
            }
        }
        if(flag== false)
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
