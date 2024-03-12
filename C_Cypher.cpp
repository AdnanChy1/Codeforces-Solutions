//  C. Cypher

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        int total[n]={0};
        int operations_count[n];
        string s[n];
        for (int i = 0; i < n; ++i) {
            cin>>operations_count[i]>>s[i];
        }
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < s[j].size(); ++k) {
                    if (s[j][k] == 'U') total[j] -= 1; //cout<<total[j]<<"   total"<<endl;
                    else total[j] += 1;//cout<<total[j]<<"   total"<<endl;
                }
            }
        for (int i = 0; i < n; ++i) {
            arr[i]=arr[i]+total[i]; //cout<<arr[i]<<"     arr"<<endl;
            if(arr[i]>=10) arr[i]= (int)abs(arr[i]-10);  //cout<<arr[i]<<"     arr"<<endl;
            else if (arr[i]<0) arr[i]=arr[i]+10;  //cout<<arr[i]<<"     arr"<<endl;
        }
        for (int i = 0; i < n; ++i) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
