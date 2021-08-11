#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    scanf("%lld" , &t);

    while(t--){
        ll a;
        scanf("%lld" , &a);

        if(a & 1){
            cout << ((a - 1) / 2) * (((a-1) / 2) + 1) << "\n";
        }
        else{
            cout << (a / 2) * (a / 2) << "\n";
        }
    }
}