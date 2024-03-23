//  A. Vlad and the Best of Five

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int a_count=0;
        int b_count=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='A') a_count++;
            else b_count++;
        }
        if (a_count>b_count) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}
