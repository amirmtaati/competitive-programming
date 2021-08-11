#include <iostream>

using namespace std;

int main()
{
    int t , i;

    long long n , k;

    scanf("%d" , &t);

    for(i = 0; i < t; i++)
    {
        scanf("%lld" , &n);
        k = 3 * ( ( n * (n + 1) ) / 2) - n;
        k = k % 1000007;

        printf("%lld\n" , k);
    }
}