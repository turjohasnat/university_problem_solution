#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int item){
    int LB = 0, UB = n-1,MID = (LB+UB)/2;
    while(LB<=UB){
        if(a[MID]==item){
            return MID;
        }
        else if(a[MID]<item){
            LB = MID + 1;
        }
        else{
            UB = MID-1;
        }
        MID = (LB+UB)/2;
    }
    return -1;
}
int main(){
    int n, arr[10],res,item;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>item;
    res = binarySearch(arr,n,item);
    if(res<0){
        cout<<"Item not found\n";
    }
    else{
        cout<<"Item is found at index "<<res;
    }

    return 0;
}

