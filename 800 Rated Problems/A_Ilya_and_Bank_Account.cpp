//  A. Ilya and Bank Account

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int n;
    cin>>n;
    if(n>=0) {
        cout<<n<<endl;
        return 0;
    }
    int last_value=n%10;
    int s_last_value=(n%100)/10;
//    cout<<last_value<<" "<<s_last_value<<endl;
    int a=0;
    int b=0;
    a=n/10;
//    cout<<a<<endl;
        b = a + (last_value-s_last_value);
//        cout<<b<<endl;
    if(a>=b) cout<<a<<endl;
    else cout<<b<<endl;
    return 0;
}
