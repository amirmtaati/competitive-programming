#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll dp[5000 + 10];
char arr[5000 + 10];

ll solve(int pos, int len)
{
    if (pos == len)
        return 1;
    if (arr[pos] == '0')
        return 0;

    ll &ans = dp[pos];

    if (ans != -1)
        return ans;

    ans = 0;

    ans = solve(pos + 1, len);

    if (pos + 1 < len)
    {
        if (arr[pos] == '1')
            ans += solve(pos + 2, len);

        else if (arr[pos] == '2' && arr[pos + 1] <= '6')
            ans += solve(pos + 2, len);
    }

    return ans;
}

int main()
{
    while (scanf("%s", &arr) == 1)
    {
        if (strcmp(arr, "0") == 0)
            break;

        memset(dp, -1, sizeof(dp));

        printf("%lld \n", solve(0, strlen(arr)));
    }
}
