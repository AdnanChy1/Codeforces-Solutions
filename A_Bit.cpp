//  A. Bit++
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=0;
    string  s[n];
    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < size(s[i]); ++j) {
            if(s[i][j]=='+'){
                x++;
                break;
            }
            else if(s[i][j]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}
