//  A. Petya and Strings

#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    string a;
    cin>>s;
    cin>>a;
    int flag=0;

    for (int i = 0; i < size(s); ++i) {
        s[i]= (char)tolower(s[i]);
        a[i]= (char)tolower(a[i]);
        if(s[i]>a[i]){
            cout<<"1"<<endl;
            break;
        }
        else if(s[i]<a[i]){
            cout<<"-1"<<endl;
            break;
        }
        else flag++;
    }
    if(flag== size(s))cout<<"0"<<endl;
    return 0;
}
