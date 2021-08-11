#include <bits/stdc++.h>
using namespace std;

void merge(int arr[] , int start , int mid , int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int L[n1] , R[n2];

    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[start + i];
    }

    for(int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        j++;
    }

    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[] , int start , int end)
{
    if(start >= end) return;

    int mid = (end - start) / 2;

    mergeSort(arr , start , mid);
    mergeSort(arr , mid + 1 , end);

    merge(arr , start , mid , end);

}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int men[n];
        int women[n];

        for(int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;

            men[i] = inp;
        }

        for(int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;

            women[i] = inp;
        }

        // mergeSort(men , 0 , n - 1);
        // mergeSort(women , 0 , n - 1);

        sort(men , men + n);
        sort(women , women + n);

        int sum = 0;

        for(int k = 0; k < n; k++)
        {
            sum += men[k] * women[k];
        }

        cout << sum << "\n";
    }
}