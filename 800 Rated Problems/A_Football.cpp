//  A. Football

#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int consecutive_0=0;
    int consecutive_1=1;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='0') consecutive_0++;
        else if(consecutive_0<7) consecutive_0=0;
    }
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='1')consecutive_1++;
        else if(consecutive_1<7) consecutive_1=0;
    }
    if(consecutive_1>=7 or consecutive_0>=7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
