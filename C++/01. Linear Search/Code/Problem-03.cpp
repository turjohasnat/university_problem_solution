//C++ Solution:
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

ll linear_search(ll y){
    while(1){
        y++;

        ll a = y / 1000;
        ll b = (y / 100) % 10;
        ll c = (y / 10) % 10;
        ll d = y % 10;

        if(a != b && a != c && a != d && b != c && b != d && c != d)
            break;
    }
    return y;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll y;
    cin >> y;

    ll result = linear_search(y);
    cout << result << endl;
    return 0;
}
