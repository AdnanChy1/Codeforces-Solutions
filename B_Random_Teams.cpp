//  B. Random Teams

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int n,m;
    cin>>n>>m;
    long long int max=0;
    long long int min1=0;
    long long int min2=0;
    long long int  value=0;
    long long int  moves=0;
    long long int remaining_moves=0;
    long long int i=0;
    long long int j=0;
    value=n-m+1;
    max=((value-1)*value)/2;
        moves=n%m;
        remaining_moves=m- moves;
        i=(ceil)((double)n/(double)m);
        min1=((i-1)*i)/2;
        min1=min1* moves;
        min2=(n-(i*moves))/remaining_moves;
        min2=((min2-1)*min2)/2;
        min2=min2*remaining_moves;
        cout<<min1+min2<<" "<<max<<endl;
    return 0;
}
