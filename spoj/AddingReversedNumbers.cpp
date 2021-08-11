#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a , b;
        cin >> a >> b;

        int reversedA = 0 , reversedB = 0;

        while(a != 0)
        {
            int rem = a % 10;
            reversedA = reversedA * 10 + rem;
            a /= 10;
        }

        while(b != 0)
        {
            int rem = b % 10;
            reversedB = reversedB * 10 + rem;
            b /= 10;
        }

        int sum = reversedB + reversedA;
        int reversedSum = 0;

        while(sum != 0)
        {
            int rem = sum % 10;
            reversedSum = reversedSum * 10 + rem;
            sum /= 10;
        }

        cout << reversedSum << "\n";
    }
}