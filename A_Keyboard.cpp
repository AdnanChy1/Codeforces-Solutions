//  A. Keyboard

#include<bits/stdc++.h>

using namespace std;

int main() {
    char arr[3][10]={'q','w','e','r','t','y','u','i','o','p',
                    'a','s','d','f','g','h','j','k','l',';',
                    'z','x','c','v','b','n','m',',','.','/'};
    char a;
    cin>>a;
    string b;
    cin>>b;
    vector<char>v;
    if(a=='R'){
        for (int i = 0; i < b.size(); ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 10; ++k) {
                    if(b[i]==arr[j][k]){
                        v.push_back(arr[j][k-1]);
                    }
                }
            }
        }
    }
    else {
        for (int i = 0; i < b.size(); ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 10; ++k) {
                    if(b[i]==arr[j][k]){
                        v.push_back(arr[j][k+1]);
                    }
                }
            }
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i];
    }
    return 0;
}
