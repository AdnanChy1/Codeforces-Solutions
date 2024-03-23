
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
        string a;
        a=s;
        reverse(a.begin(),a.end());
        int flag=0;
        if (a==s){
            cout<<s<<endl;
            continue;
        }
        else if( a[0]>s[0]){
            cout<<s<<endl;
            continue;
        }
        else{
            for (int i = 0; i < s.size(); ++i) {
                if(a[i]>s[i]){
                    cout<<s<<endl;
                    break;
                }

                else if(a[i]<s[i]){
                    a.append(s);
                    cout<<a<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}