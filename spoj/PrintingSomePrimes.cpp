#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n = 10;

int main()
{
    vector<bool> isPrime(n + 1 , true);
    isPrime[0] = isPrime[1] = false;

    for(ll i = 0; i <= n; i++){
        if(isPrime[i] && i * i <= n){
            for(ll j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }

    for(ll i = 0; i <= n; i += 1){
        if(isPrime[i]){
            printf("%lld\n" , i);
        }
    }
}

