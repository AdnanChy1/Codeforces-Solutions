//  B. Fireworks

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        long long int a,b,m;
        long long  total=0;
        cin>>a>>b>>m;
        total=(m/a)+1;
        total=total+(m/b)+1;
        cout<<total<<endl;
    }
    return 0;
}
