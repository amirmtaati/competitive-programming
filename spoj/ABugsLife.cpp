#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;

vector< vector<int> > adj;
vector<int> gender;
bool suspicious;

void dfs(int t, int c)
{
    if (suspicious)
        return;

    gender[t] = c;
    for (int i = 0; i < adj[t].size(); i++)
    {
        if (gender[adj[t][i]] == -1)
            dfs(adj[t][i], 1 - c);
        else if (gender[t] == gender[adj[t][i]])
        {
            suspicious = true;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        cin >> a >> b;
        adj.clear();
        adj.resize(a + 1);
        gender.assign(a + 1, -1);
        suspicious = false;

        for (int i = 0; i < b; i++)
        {
            cin >> c >> d;
            adj[c].push_back(d);
            adj[d].push_back(c);
        }

        for (int j = 1; j <= a; j++)
        {
            if (gender[j] == -1)
            {
                dfs(j, 0);
            }
        }
        cout << "Scenario #" << tc << ":" << endl;
        if (suspicious)
            cout << "Suspicious bugs found!" << endl;
        else
            cout << "No suspicious bugs found!" << endl;
    }
}