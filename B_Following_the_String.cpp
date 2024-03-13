//  B. Following the String

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        char arr[n];
        map<char,int>mp;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (char i = 'a'; i <= 'z' ; ++i) {
            mp[i]=0;
        }
       auto it=mp.begin();
        for (int i = 0; i < n; ++i) {
            here:
            if(a[i]==it->second) {
                mp[it->first]++;
                cout << it->first;
            }
            else{
                advance(it,1);
                goto here;
            }
            it=mp.begin();
        }
        cout<<endl;
   }
    return 0;
}
