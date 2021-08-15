#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countZeros(ll n)
{
    if(n < 0)
    {
        return -1;
    }

    ll counter = 0;

    for(ll i = 5; n / i >= 1; i *= 5)
    {
        counter += n / i;
    }

    return counter;

}

int main()
{
    ll t;
    scanf("%lld" , &t);

    while(t--)
    {
        ll n;
        scanf("%lld" , &n);

        cout << countZeros(n) << "\n";
    }
}