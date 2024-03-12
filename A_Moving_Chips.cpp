//  A. Moving Chips

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int count=0;
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int count_0=0;
        int f_1=0;
        for (int i = 0; i < n; ++i) {
            if(a[i]==1){
                f_1=i;
                break;
            }
        }
        int l_1=0;
        int s_1=0;
        for (int i = n-1; i >=0 ; --i) {
            if(a[i]==1){
                l_1=i;
                break;
            }
        }
        for (int i = f_1+1; i <l_1 ; ++i) {
            if(a[i]==0) count_0++;
        }
        for (int i = 1; i <=count_0 ; ++i) {
            for (int j = l_1-1; j >f_1 ; --j) {
                if(a[j]==1){
                    s_1=j;
                }
                else if(a[j]==0){
                    swap(a[j],a[l_1]);
                    count++;
                    if(s_1==0){
                        l_1=j; // if there is no 1 around the last 1, the index is updated with that 1 as the last 1
                    }
                    else
                        l_1=s_1; // there is another 1 as the last 1 after swapping the value, so we make that 1 l_1
                    break;
            }
            }

        }
        cout<<count<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
