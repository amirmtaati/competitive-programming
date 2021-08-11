#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

map<int , ll> memo;

ll solve(int n){
    if(n == 0) return 0;

    if(memo[n] != 0) return memo[n];

    ll a = solve(n / 2) + solve(n / 3) + solve(n / 4);

    if(a > n) memo[n] = a;
    else      memo[n] = n;

    return memo[n];
}

int main()
{
    int n;

    while(scanf("%d", &n) == 1)
    {
        printf("%lld \n" , solve(n));
    }
}