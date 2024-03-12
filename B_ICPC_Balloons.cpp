//  B. ICPC Balloons

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
        int unique=0;
        int duplicate=0;
        int balloon_count=0;
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i+1; j < s.size(); ++j) {
                if(s[i]!='0'){
                    if(s[i]==s[j]){
                        s[j]='0';
                    }
                }
            }
        }
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='0')duplicate++;
            else unique++;
        }

        balloon_count=(2*unique)+duplicate;
        cout<<balloon_count<<endl;
    }
    return 0;
}
