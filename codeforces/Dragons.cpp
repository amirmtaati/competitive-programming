#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> arr;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        pair<int, int> p;
        p.first = x;
        p.second = y;
        arr.push_back(p);
    }

    int minIdx;

    for (int i = 0; i < arr.size(); i++)
    {
        minIdx = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j].first < arr[minIdx].first)
                minIdx = j;
        }

        swap(arr[i], arr[minIdx]);
    }

    bool win = true;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].first < s)
            s += arr[i].second;
        else
            win = false;
    }

    if (win)
        cout << "YES \n";
    else
        cout << "NO \n";
}