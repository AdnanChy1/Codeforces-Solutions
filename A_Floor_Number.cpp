//  A. Floor Number

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int floor_number=0;
        int n,x;
        cin>>n>>x;
        if(n-2<0)
            cout<<1<<endl;
        else {
            n=n-2;
            if(n%x!=0){
                floor_number=(n/x)+2;
                cout<<floor_number<<endl;
            }
            else{
                floor_number=(n/x)+1;
                cout<<floor_number<<endl;
            }

        }

    }
    return 0;
}
