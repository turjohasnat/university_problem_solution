#include<bits/stdc++.h>
using namespace std;

struct Employee{
    int ID;
    string name;
    float salary;
};

int main(){
    Employee e[10];
    int n,i;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>e[i].ID>>e[i].name>>e[i].salary;
    }
    cout<<"-----------Employee Info----------"<<endl;
    for(int i=0;i<n;i++){
        cout<<e[i].ID<<" "<<e[i].name<<" "<<e[i].salary<<endl;
    }
    for(int i=0;i<n;i++){
        if(e[i].name[0]=='a' && e[i].salary>500)
            cout<<e[i].ID<<endl;
    }
    return 0;
}
