#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n;
    scanf("%lld", &n);

    if(n != 0 && ((n & n-1) == 0)){
        cout << "TAK" << "\n";
    }
    else{
        cout << "NIE" << "\n";
    }
}