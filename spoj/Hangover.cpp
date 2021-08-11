#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a , ll b){
    while(a != b){
        if(a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
}

int main()
{
    while (true)
    {
        double inp;
        cin >> inp;
        if (fabs(inp - 0.00) < numeric_limits<double>::epsilon())
        {
            break;
        }
        int i = 2;
        double sum = 0;
        while (sum < inp)
        {
            ll tmp = gcd(1 , i);
            sum += ((double)1/tmp) / (i / tmp);
            i++;
        }
        cout << i - 2 << " card(s) \n";
    }

}