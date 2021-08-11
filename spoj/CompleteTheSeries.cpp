#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long a3 , an_2 , sum;
        cin >> a3 >> an_2 >> sum;

        long long d  = a3 / 3;
        long long a1 = a3 - (2 * d);

        long long n = (sum * 2) / (a1 + an_2 + (2*d));

        cout << n << "\n";

        for(long long i = 0; i < n; i++)
        {
            cout << a1 + ((i - 1) * d) + 1 << " ";
        }
    }
}