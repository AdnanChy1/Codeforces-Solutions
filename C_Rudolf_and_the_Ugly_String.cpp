//  C. Rudolf and the Ugly String

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int count = 0;
        int i = 0;
        while (i + 2 < s.size()) {
            if (s[i] == 'm' and s[i + 1] == 'a' and s[i + 2] == 'p' or s[i] == 'p' and s[i + 1] == 'i' and
                s[i + 2] == 'e') {
                count++;
                i += 3;
            }
            else i++;
        }
        cout << count<<endl;
    }
    return 0;
}
