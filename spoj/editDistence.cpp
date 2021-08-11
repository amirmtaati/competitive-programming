#include <bits/stdc++.h>
// Wagner Fischer Algorithm
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int dp[a.length() + 1][b.length() + 1];
        for (int i = 0; i <= a.length(); i++)
        {
            for (int j = 0; j <= b.length(); j++)
            {
                if (i == 0)
                    dp[i][j] = j;
                else if (j == 0)
                    dp[i][j] = i;
                else if (a[i - 1] == b[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
            }
        }
        cout << dp[a.length()][b.length()] << "\n";
    }
}
