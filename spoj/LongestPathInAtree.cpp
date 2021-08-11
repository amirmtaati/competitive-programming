#include <bits/stdc++.h>
using namespace std;


void bfs(int d[], vector<int> g[], int n, int s){
    for(int i = 0; i < n; i++){
        d[i] = -1;
    }

    d[s] = 0;

    queue<int> q;
    q.push(s);

    while (!q.empty()){
        int t = q.front();
        q.pop();

        for (int it : g[t]){
            if (d[it] == -1){
                q.push(it);
                d[it] = d[t] + 1;
            }
        }
    }

    return;
}

int main(){
    int n, a, b;
    cin >> n;

    vector<int> g[n];

    for (int i = 0; i < n - 1; i++){
        cin >> a >> b;

        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }

    int d[100000];

    bfs(d, g, n, 0);

    int maxDis = -1, index = 0;

    for (int i = 0; i < n; i++){
        if (d[i] > maxDis){
            maxDis = d[i];
            index = i;
        }
    }


    bfs(d, g, n, index);
    maxDis = -1;

    for (int i = 0; i < n; i++){
        if (d[i] > maxDis){
            maxDis = d[i];
        }
    }

    cout << maxDis << "\n";
};