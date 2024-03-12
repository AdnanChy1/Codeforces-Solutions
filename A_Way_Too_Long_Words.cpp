//  A. Way Too Long Words
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int size_total=0;
    string s[n];
    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }
    for (int i = 0; i < n; ++i) {
        if(size(s[i])>10){
           size_total=size(s[i]);
           cout<<s[i][0]<<size(s[i])-2<<s[i][size_total-1]<<endl;
        }
        else
            cout<<s[i]<<endl;
    }
    return 0;
}
