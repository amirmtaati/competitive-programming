#include <bits/stdc++.h>

using namespace std;

vector<int> adj[10000 + 10];
bool visited[10000 + 10];

int N, M, cycle;

void dfs(int u, int prev)
{
    if (visited[u])
    {
        cycle = 1;
        return;
    }

    visited[u] = true;

    for (int i = 0; i < adj[u].size(); i++)
    {
        if (adj[u][i] != prev)
        {
            dfs(adj[u][i], u);
        }
    }
}

int main()
{

    while (scanf("%d%d",&N,&M)==2)
    {
        for (int i = 0; i <= 10000; i++)
        {
            adj[i].clear();
            visited[i] = false;
        }

        cycle = 0;

        while (M--)
        {
            int u, v;
            scanf("%d%d", &u, &v);

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 1);

        for (int i = 1; i <= N; i++)
            if (!visited[i])
                cycle = 1;

        if (cycle)
            cout << "NO\n";
        else
            cout << "YES \n";
    }
}