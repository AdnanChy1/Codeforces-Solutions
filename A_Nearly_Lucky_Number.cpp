//  A. Nearly Lucky Number

#include<bits/stdc++.h>

using namespace std;

int main() {
    map< int, int>digit_count;
    long long int n;
    cin>>n;
    int remainder=0;
    while (n>0){
        remainder=n%10;
        n=n/10;
        digit_count[remainder]++;
    }
    if(digit_count[4]+digit_count[7]==4 or digit_count[4]+digit_count[7]==7)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
