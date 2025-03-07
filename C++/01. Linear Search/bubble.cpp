#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[10],cnt=0,flag;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        flag = 0;
        for(int j=0;j<n-i-1;j++){
            cnt++;
            if(arr[j]>arr[j+1]){
                flag = 1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==0)break;
    }
    cout<<"----------Sorted Array--------"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"No of iterations: "<<cnt<<endl;
    return 0;
}
