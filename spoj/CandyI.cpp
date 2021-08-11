#include <bits/stdc++.h>

using namespace std;

int main()
{

    while (true)
    {
        int t;
        cin >> t;
        if (t < 0)
        {
            break;
        }
        
        else
        {
            int sum = 0;
            int n;
            int biggest = -1;

            for (int i = 0; i < t; i++)
            {
                cin >> n;
                if(n > biggest){
                    biggest = n;
                }
                sum += n;
            }

            if (sum % t != 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                int avg = sum / t;
                cout << biggest - avg << "\n";
            }
        }
    }
}