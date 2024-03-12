
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < v.size(); ++i) {
            cin >> v[i];
        }
        int left = 0;
        int required = 0;
        int sum = 0;
        int ideal = 0;
        int flag=0;
        for (int i = 0; i < v.size(); ++i) {
            sum += v[i];
        }
        if(sum%n!=0){
            cout<<"NO"<<endl;
            continue;
        }
        ideal = sum / n;
        if (v[0] < ideal) {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] > ideal) {
                left = left + (v[i] - ideal);
                v[i] = ideal;
            } else if (v[i] < ideal) {
                required = (ideal - v[i]);
                if (required > left) {
                    flag++;
                    break;
                } else {
                    left = left - required;
                    v[i] = v[i] + required;
                }
            }
        }
        if(flag==0 && left==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}