//  A. Kefa and First Steps

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    int flag=0;
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    vector<int>a;
    int count=1;
    for (int i = 0; i < n-1; ++i) {
        if(v[i]<=v[i+1]) {
            count++;
        }
        else {
            a.push_back(count);
            count=1;
        }
    }
    a.push_back(count);
//    for(auto it:a)
//        cout<<it<<" ";
//    cout<<endl;
   cout<<*max_element(a.begin(),a.end())<<endl;
    return 0;
}
