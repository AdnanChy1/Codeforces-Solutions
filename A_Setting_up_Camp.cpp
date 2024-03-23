//  A. Setting up Camp

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int tent=a;
        long long int d=c;
        c=c+1;
        long long int temp=b;
        while (c!=0){
            if (temp%3==0){
                break;
            }
            else{
                c--;
                temp=b+c;
            }
        }
        b=temp;
        if (d+1>c)
        c=d-c;
        else
            c=d;
        if (b%3!=0){
            cout<< -1 <<endl;
        }
        else{
            tent=tent+(b/3);
            if (c==2 or c==3 or c==1){
                tent=tent+1;
            }
            else{
                temp=c%3;
                tent=tent+(c/3);
                if (temp==1 or temp==2)
                    tent=tent+1;
            }
//            cout<<a<<" "<<b<<" "<<c<<endl;
            cout<<tent<<endl;
        }
    }
    return 0;
}
