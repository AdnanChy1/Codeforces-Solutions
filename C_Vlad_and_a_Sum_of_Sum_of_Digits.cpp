//  C. Vlad and a Sum of Sum of Digits

#include<bits/stdc++.h>

using namespace std;
int divisor(int i){
    int a=0;
    while(i!=0){
       a+=i%10;
       i=i/10;
    }
    return a;
}
int main() {
    long long int arr[200005];
    long long int sum=0;
    int i=0;
    for (i = 0; i < 200005; ++i) {
        sum+= divisor(i);
        arr[i]=sum;
    }
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
