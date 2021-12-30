#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d" , &n);

    int b = 0;

    while(true) {
        if(n == 0) {
            break;
        }
        if(n >= 100) {
            n -= 100;
        }
        else if(n >= 20 && n < 100) {
            n -= 20;
        }
        else if(n >= 10 && n < 20) {
            n -= 10;
        }
        else if(n >= 5 && n < 10) {
            n -= 5;
        }
        else if(n < 5){
            n -= 1;
        }
        b++;
    }

    printf("%d \n" , b);
}