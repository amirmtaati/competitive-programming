#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    while (true)
    {
        ll cols;
        string s;

        cin >> cols;
        cin >> s;

        if (cols == 0)
        {
            break;
        }

        ll a = cols;
        ll b = a + cols;

        for (ll i = 0; i <= cols; i++)
        {

            reverse(s.begin() + a, s.begin() + b);
            

            a += 2 * cols;
            b = a + cols;
        }

        string ans = "";

        char aaa[5000 + 10];

        for (ll i = 0; i < cols; i++)
        {
            for (ll j = i; j <= (s.length() + 1) - cols + i; j += cols)
            {
                ans.insert(ans.end() , s[j]);
            }
        }


        cout << ans;
    }

    //ttyohhieneesiaabss

    return 0;
}