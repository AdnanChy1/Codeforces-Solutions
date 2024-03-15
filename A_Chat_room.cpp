//  A. Chat room

#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int h=-1;
    int e=-1;
    int l1=-1;
    int l2=-1;
    int o=-1;
    int i=0;
    for ( ; i <s.size() ; i++) {
        if(s[i]=='h'){
            h=i;
            i++;
            break;
        }
    }
    for(;i<s.size();i++){
        if(s[i]=='e'){
            e=i;
            i++;
            break;
        }
    }
    for(;i<s.size();i++){
        if (s[i]=='l'){
            l1=i;
            i++;
            break;
        }
    }
    for(;i<s.size();i++){
        if (s[i]=='l'){
            l2=i;
            i++;
            break;
        }
    }
    for(;i<s.size();i++){
        if (s[i]=='o'){
            o=i;
            break;
        }
    }
//    cout<<h<<" "<<e<<" "<<l1<<" "<<l2<<" "<<o<<endl;
    if (h<e and e<l1 and l1<l2 and l2<o)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
