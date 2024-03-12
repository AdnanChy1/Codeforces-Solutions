//  A. Candies

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x=0;
        int n;
        int a=0;
        cin>>n;
        for (int i = 2; i <30 ; ++i) {
            a=(int)pow(2,i)-1;
            if(n%a==0){
               x=n/a;
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
