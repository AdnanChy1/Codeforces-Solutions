//  A. Case of the Zeros and Ones

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    long long int count=0;
    long long int count_0=0;
    long long int count_1=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='0') count_0++;
        else count_1++;
    }
    cout<<abs(count_1-count_0)<<endl;
    return 0;
}
