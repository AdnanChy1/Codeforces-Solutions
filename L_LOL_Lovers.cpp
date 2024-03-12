//  L. LOL Lovers

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    vector<char>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    int l_count=0;
    int o_count=0;
    for (int i = 0; i < n; ++i) {
        if(v[i]=='O')o_count++;
        else  l_count++;
    }
    cout<<l_count<<"    l_count"<<endl<<o_count<<"  o_count"<<endl;
    int l1_count=0;
    int l2_count=l_count;
    int o1_count=0;
    int o2_count=o_count;
    if(v[0]=='L'){
        l1_count++;
        cout<<l1_count<<"   l1_count"<<endl;
        l2_count=l_count-1;
        cout<<l2_count<<"   l2_count"<<endl;
        l_count--;
        cout<<l_count<<"    l_count"<<endl;
        count++;
        cout<<count<<"  count"<<endl;
    }
    else if(v[0]=='O'){
        o1_count++;
        cout<<o1_count<<"   o1_count"<<endl;
        o2_count=o_count-1;
        cout<<o2_count<<"   o2_count"<<endl;
        o_count--;
        cout<<l_count<<"    l_count"<<endl;
        count++;
        cout<<count<<"  count"<<endl;
    }
    for (int i = 1; i < n; ++i) {
        if(l1_count!=l2_count and o1_count!=o2_count){
            break;
        }
        else if(l1_count==l2_count or o1_count==o2_count){
            if(v[i]=='L'){
                l1_count++;
                cout<<l1_count<<"   l1_count"<<endl;
                l2_count=l_count-1;
                cout<<l2_count<<"   l2_count"<<endl;
                l_count--;
                cout<<l_count<<"    l_count"<<endl;
                count++;
                cout<<count<<"  count"<<endl;
            }
            else if(v[i]=='O'){
                o1_count++;
                cout<<o1_count<<"   o1_count"<<endl;
                o2_count=o_count-1;
                cout<<o2_count<<"   o2_count"<<endl;
                o_count--;
                cout<<l_count<<"    l_count"<<endl;
                count++;
                cout<<count<<"  count"<<endl;
            }
        }
        }
    if(l2_count==0 and o2_count==0){
        cout<<"-1"<<endl;
    }
    else {
        cout << count << endl;
    }
    return 0;
}
