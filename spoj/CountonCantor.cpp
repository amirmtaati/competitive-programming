/*

I have learned about Georg Cantor proof that there are diffrent kinds of infinity
solving this problem was very enjoyble

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve(ll n)
{
    ll counter = 1;
    ll num     = 1;
    ll den     = 1;

    while(counter < n)
    {
        den++ ; counter++;

        if(counter == n) break;

        while(den > 1 && counter < n)
        {
            num++ ; den-- ; counter++;
        }

        if(counter == n) break;

        num++ ; counter++;

        if(counter == n) break;

        while(num > 1 && counter < n)
        {
            num-- ; den++ ; counter++;
        }
    }

    printf("TERM %lld IS %lld/%lld\n",n , num , den);

}

int main()
{
    ll t;
    scanf("%lld" , &t);

    while(t--)
    {
        ll n;
        scanf("%lld" , &n);
        solve(n);
    }
}