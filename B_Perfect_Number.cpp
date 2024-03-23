//  B. Perfect Number

#include<bits/stdc++.h>

using namespace std;
int divisior(int a){
    int sum=0;
    while (a!=0){
        sum+=a%10;
        a=a/10;
    }
    return sum;
}
int main() {
    long long int arr[10001]={0};
    int sum=0;
    long long int perfect_number=19;
    arr[1]=19;
    for (int i = 2; i < 10001; ++i) {
        while (1){
            perfect_number++;
            sum=divisior(perfect_number);
            if (sum==10){
                arr[i]=perfect_number;
                break;
            }
        }
    }
    int n;
    cin>>n;
    cout<<arr[n]<<endl;
    return 0;
}
