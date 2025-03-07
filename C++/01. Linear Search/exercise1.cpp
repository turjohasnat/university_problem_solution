#include<bits/stdc++.h>
using namespace std;
bool even_digit(int num){
    int digit = 0;
    while(num){
        digit++;
        num /= 10;
    }
    return digit%2==0;
}
int linear_search(int a[],int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(even_digit(a[i]))
            cnt++;
    }
    return cnt;
}
int main(){
    int n, arr[10],res;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Even numbers: "<<linear_search(arr,n);

    return 0;
}
