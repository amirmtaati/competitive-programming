#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = n;

    for(int i = 2; i * i <= n; ++i){
        ans += n / i - i + 1;
    }

    cout << ans << "\n";
}