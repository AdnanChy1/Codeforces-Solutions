//  B. New Year's Number

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int count=0;
        if (n==2021 or n==2020){
            cout<<"YES"<<endl;
            continue;
        }
        while (n-2020>=0){
            n=n-2020;
            count++;
        }
//        cout<<n<<endl;
//        cout<<count<<endl;
        if(n==0){
            cout<<"YES"<<endl;
        }
        else if(n<=count){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
