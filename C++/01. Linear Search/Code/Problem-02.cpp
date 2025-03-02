//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

ll linear_search(ll n, string s){
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == s[i+1])
            cnt++;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);

    ll result = linear_search(n, s);
    cout << result << endl;

    return 0;
}
