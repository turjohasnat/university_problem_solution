#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int mn = i;
        for(int j=i+1;j<n;j++){
            if(arr[mn]>arr[j]){
                mn = j;
            }
        }
        swap(arr[i],arr[mn]);
    }
    cout<<"----------Sorted Array--------"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

