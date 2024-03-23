//  B. Vlad and Shapes

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        char a[n][n];
        int row=-1;
        int column=-1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin>>a[i][j];
            }
        }
        int flag=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i][j]=='1'){
                    flag++;
                }
            }
            if (flag==1){
                cout<<"TRIANGLE"<<endl;
                break;
            }
        }
        if (flag==1) continue;
        else flag=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(a[i][j]=='1'){
                    row=i;
                    column=j;
                    flag++;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if (a[row+1][column]=='1') cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }
    return 0;
}
