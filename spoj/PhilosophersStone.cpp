/*
I have learned about dynamic programming 
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h;
ll w;
ll mat[100+5][100+5];
ll dp[100+5][100+5];


ll solve()
{
    memset(dp,0,sizeof dp);

    for(ll i = 0; i < w; i++)
    {
        dp[0][i] = mat[0][i];
    }

    for(ll i = 0; i < h - 1; i++)
    {
        for(ll j = 0; j < w; j++)
        {
            if(j > 0)
            {
                dp[i + 1][j - 1] = max(dp[i + 1][j - 1] , dp[i][j] + mat[i + 1][j - 1]);
            }

            if(j < w)
            {
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1] , dp[i][j] + mat[i + 1][j + 1]);
            }
            dp[i + 1][j] = max(dp[i + 1][j] , dp[i][j] + mat[i + 1][j]);
        }
    }

    ll ans = 0;

    for(ll f = 0; f < w; f++)
    {
        ans = max(ans , dp[h-1][f]);
    }

    return ans;
}

int main()
{
    ll T;
    scanf("%lld" , &T);

    while(T--)
    {
        scanf("%lld %lld" , &h , &w);

        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                scanf("%lld" , &mat[i][j]);
            }
        }

        printf("%lld\n" , solve());
    }
    return 0;
}