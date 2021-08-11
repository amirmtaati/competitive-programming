#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool isPalindrome(ll n)
{
    ll temp = n;
    ll sum  = 0;


    while(n > 0){
        sum = (sum * 10) + (n % 10);
        n  /= 10;
    }

    if(sum == temp){
        return true;
    }
    return false;

}

string reverse(string str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    
    return str;
}

int main()
{
    ll t;
    scanf("%lld" , &t);

    while(t--){
        ll k;
        scanf("%lld" , &k);

        stringstream ss;
        ss << k;
        string s;
        ss >> s;

        int len = s.length();
        string left = s.substr(0, len / 2);
        string middle = s.substr(len / 2, len - len / 2);
        string right = s.substr(len - len / 2);

        if (right.compare(reverse(left)) < 0)
            cout <<  left + middle + reverse(left);

        string next;
        stringstream sss;
        sss << left + middle;
        sss >> next; 
        cout <<  next.substr(0, left.length() + middle.length())
             + reverse(next).substr(middle.length());

    }
}