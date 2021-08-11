#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n , m;
        int temp ;
        int maxN = -1;
        int maxM = -1;
        cin >> n >> m;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp > maxN)
            {
                maxN = temp;
            }   
        }
        
        for(int j = 0; j < m; j++)
        {
            cin >> temp;
            if(temp > maxM)
            {
                maxM = temp;
            }
        }

        if(maxM > maxN)
        {
            cout << "MechaGodzilla \n";
        }
        else{
            cout << "Godzilla \n";
        }
    }
}