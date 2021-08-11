/*

I have learned about Inverse and ambiguous permutations

*/


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool solve(ll arr[] , ll n)
{
    ll inverse[n];
    for(ll i = 0; i < n; i++)
    {
        inverse[arr[i] - 1] = i + 1;
    }
    ll j;

    for(j = 0; j < n; j++)
    {
        if(arr[j] != inverse[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    while(true)
    {
        ll n;
        scanf("%lld" , &n);
        if(n != 0)
        {
            ll arr[n];

            for(ll i = 0; i < n; i++)
            {
                ll num;
                scanf("%lld" , &num);
                arr[i] = num;
            }

            if(solve(arr, n))
            {
                cout << "ambiguous" << "\n";
            }
            else
            {
                cout << "not ambiguous" << "\n";
            }
        }
        else{
           break;
        }
    }
}