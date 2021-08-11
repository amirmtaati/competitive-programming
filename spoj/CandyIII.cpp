#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    scanf("%lld" , &t);

    while(t--)
    {
        ll n;
        ll r = 0;
        bool ans;
        scanf("%lld" , &n);
        for(ll i = 0; i < n; i++)
        {
            ll candy;
            scanf("%lld" , &candy);
            
            r = (candy + r) % n;
        }
        if(r == 0){
            cout << "YES \n";
        }
        else{
            cout << "NO \n";
        }


    }
}