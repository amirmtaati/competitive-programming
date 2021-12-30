#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int res = 0;
    set<int> s;
    set<int> a;
    map<int, int> m;
    scanf("%d", &n);

    int boxers[n];
    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;

        s.insert(w);
        m[w]++;
    }

    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
        if (m[*it] == 1)
        {
            a.insert(*it);
        }
        else if (m[*it] == 2)
        {
            a.insert(*it);
            a.insert(*it + 1);
        }
        else
        {
            if (*it != 1)
            {
                a.insert(*it - 1);
            }

            a.insert(*it);
            a.insert(*it + 1);
        }
    }

    cout << a.size() << "\n";
}