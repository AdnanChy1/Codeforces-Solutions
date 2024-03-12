//  A. Beautiful Year

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int year=0;
    unordered_set<int>s;
    while (true){
        n++;
        year=n;
        while (n>0){
           s.insert(n%10);
            n=n/10;
    }
        if(s.size()==4){
            cout<<year<<endl;
            break;
        }
        else{
            s.clear();
            n=year;
        }
    }
    return 0;
}
