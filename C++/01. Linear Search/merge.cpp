#include<bits/stdc++.h>
using namespace std;
void conquer(int a[],int l,int m, int h){
    int nL = m-l+1;
    int nR = h-m;
    int i,j,k;
    int Left[nL+1],Right[nR+1];
    j=0;
    for(i=l;i<=m;i++){
        Left[j++] = a[i];
    }
    Left[j] = INT_MAX;
    j=0;
    for(i=m+1;i<=h;i++){
        Right[j++] = a[i];
    }
    Right[j] = INT_MAX;
    i=j=0;
    for(k=l;k<=h;k++){
        if(Left[i]<Right[j]){
            a[k] = Left[i];
            i++;
        }
        else{
            a[k] = Right[j];
            j++;
        }
    }
}
void mergeSort(int a[],int LB, int UB){
        if(LB<UB){
            int MID = (LB+UB)/2;
            mergeSort(a,LB,MID);
            mergeSort(a,MID+1,UB);
            conquer(a,LB,MID,UB);
        }
}

int main(){
    int n,arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    cout<<"----------Sorted Array--------"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

