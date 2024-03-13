//  A. Make it White

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int first_b=0;
        int last_b=0;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='B'){
                first_b=i;
                break;
            }
        }
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='B')
            last_b=i;
        }
        cout<<last_b-first_b+1<<endl;
    }
    return 0;
}
