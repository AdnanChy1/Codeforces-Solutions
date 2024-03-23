//  C. Make Equal Again

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int start=0;
        int end=n-1;
        int count1=0;
        int count2=0;
        for (int i = 1; i < n; ++i) {
            if (a[i]==a[0]){
                start++;
            }
            else{
                start=i;
                break;
            }
        }
        for (int i = n-1; i >=start ; --i) {
            if (a[i]==a[0])
               end--;
            else {
                end = i;
                break;
            }
        }
        count1=end-start+1;
        start=0;
        end=n-1;
        for (int i = 0; i < n; ++i) {
            if (a[i]==a[n-1]){
                start++;
            }
            else{
                start=i;
                break;
            }
        }
        for (int i = n-1; i >=start ; --i) {
            if (a[i]==a[n-1])
                end--;
            else{
                end=i;
                break;
            }
        }
        count2=end-start+1;
        if (count1>count2) cout<<count2<<endl;
        else cout<<count1<<endl;
    }
    return 0;
}
