#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    int sum=0;
    int money=0;
    vector<int>v(n);
    for (int i = 0; i <n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for (int i = 0; i <n ; ++i) {
        sum=sum+v[i];
    }
    int i=0;
    while (sum>=money){
        money+=v[i];
        sum-=v[i];
        i++;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
