//  B. Good Kid

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> product(n);
        for (int i = 0; i < n; ++i) {
            product[i]=1;
        }
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        for (int i = 0; i < n; ++i) {
            v[i]=v[i]+1;
            for (int j = 0; j < n; ++j) {
                product[i]=product[i]*v[j];
            }
            v[i]=v[i]-1;
        }
        cout<<*max_element(product.begin(),product.end())<<endl;
    }
    return 0;
}
