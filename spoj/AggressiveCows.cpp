#include <bits/stdc++.h>
using namespace std;

bool isFeasbile(int arr[] , int mid , int n , int k){
    int p = arr[0];
    int e = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] - p >= mid)
        {
            p = arr[i];
            e++;


            if(e == k) return true;
        }
    }

    return 0;
}

int solve(int arr[] , int n , int k)
{
    sort(arr , arr + n);

    int res = -1;

    int left = 1 , right = arr[n - 1] - arr[0];

    while(left < right)
    {
        int mid = (left + right) / 2;

        if(isFeasbile(arr , mid , n , k))
        {
            res  = max(res , mid);
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n , k;
        cin >> n >> k;

        int arr[n];

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
        }

        cout << solve(arr , n , k) << "\n";
    }
}