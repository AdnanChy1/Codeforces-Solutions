//  A. Bear and Big Brother

#include<bits/stdc++.h>

using namespace std;

int main() {
    int years=0;
    int l,b;
    cin>>l>>b;
    while (b>=l){
        b=2*b;
        l=l*3;
        years++;
    }
    cout<<years<<endl;
    return 0;
}
