//  B. Turtle Math: Fast Three Task

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int sum=0;
        int count=0;
        int flag=0;
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        for (int i = 0; i < v.size(); ++i) {
            sum=sum+v[i];
        }
        if (sum%3==2){
            count++;
            cout<<count<<endl;
            continue;
        }
        else if(sum%3==0){
            cout<<count<<endl;
            continue;
        }
        else{
            for (int i = 0; i <v.size(); ++i) {
                if ((sum-v[i])%3==0){
                    flag++;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
