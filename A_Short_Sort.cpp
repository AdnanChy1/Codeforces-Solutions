//  A. Short Sort

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int count = 0;
        string a;
        cin>>a;
        for (int i = 0; i < size(a)-1; ++i) {
          for(int j=i+1;j< size(a);j++){
              if(a[i]>a[j] and a[i]>a[j+1]){
                  if(a[j]>a[j+1])swap(a[i],a[j+1]);
                  else swap(a[i],a[j]);
                  count++;
              }
              else if(a[i]>a[j]){
                  swap(a[i],a[j]);
                  count++;
              }
          }
        }
        if(count==0 or count==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
