#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    scanf("%d" , &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d" , &arr[i]);
    }

    int k = 1;
    int o = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i - 1]) { k++; }
        else { o = max(o , k) , k = 1;}
    }

    o = max(o , k);

    printf("%d" , o);

}