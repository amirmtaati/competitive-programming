#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

vi toVector(string str)
{
    vi vec;

    for (int i = 0; i < str.length(); i++)
    {
        vec.push_back(str[i] - '0');
    }

    return vec;
}

vi add(vi& x, vi& y)
{
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    vi ans;

    int len = min(x.size(), y.size());

    int carry = 0;

    for (int i = 0; i < len; i++)
    {
        int sumDigit = x[i] + y[i] + carry;

        carry = sumDigit / 10;

        ans.push_back(sumDigit % 10);
    }

    if (x.size() > len)
    {
        for (int i = len; i < x.size(); i++)
        {
            int sumDigit = x[i] + carry;

            carry = sumDigit / 10;

            ans.push_back(sumDigit % 10);
        }
    }

    if (y.size() > len)
    {
        for (int i = len; i < y.size(); i++)
        {
            int sumDigit = y[i] + carry;

            carry = sumDigit / 10;

            ans.push_back(sumDigit % 10);
        }
    }

    while (carry)
    {
        ans.push_back(carry % 10);

        carry /= 10;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

vi subtract(vi& x, vi& y)
{
    // reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    vi ans;

    int len = y.size();

    for (int i = 0; i < len; i++)
    {
        if (x[i] < y[i])
        {
            x[i + 1]--;
            ans.push_back(10 + x[i] - y[i]);
        }
        else
        {
            ans.push_back(x[i] - y[i]);
        }
    }

    if (x.size() > len)
    {
        for (int i = len; i < x.size() - 1; i++)
        {
            if (x[i] < 0)
            {
                x[i + 1]--;
                ans.push_back(10 + x[i]);
            }
            else
            {
                ans.push_back(x[i]);
            }
        }
    }

    reverse(ans.begin(), ans.end());

    vi arr;

    int i = 0;

    while (ans[i] == 0)
        i++;

    for (; i < ans.size(); i++)
    {
        arr.push_back(ans[i]);
    }

    return arr;
}

vi divideByTwo(vi& sum)
{
    vi ans;
    int val = 0;

    for (int i = 0; i < sum.size(); i++)
    {
        if (val)
        {
            val = val * 10 + sum[i];
            ans.push_back(val / 2);
            val = val % 2;
        }
        else
        {
            if (sum[i] < 2)
            {
                val += sum[i];
                ans.push_back(0);
            }
            else
            {
                val = sum[i] % 2;
                ans.push_back(sum[i] / 2);
            }
        }
    }

    vi arr;

    int i = 0;

    while (ans[i] == 0)
        i++;

    for (; i < ans.size(); i++)
    {
        arr.push_back(ans[i]);
    }

    return arr;
}

int main()
{

    string N, M;

    for (int i = 0; i < 10; i++)
    {
        cin >> N >> M;

        vi digN = toVector(N);
        vi digM = toVector(M);

        vi sum = add(digN , digM);
        vi dividedByTwo = divideByTwo(sum);

        for(int i = 0; i < dividedByTwo.size(); i++) {
            cout << dividedByTwo[i];
        }
        cout << "\n";

        vi diffrence = subtract(digN , dividedByTwo);

        for(int j = 0; j < diffrence.size(); j++){
            cout << diffrence[j];
        }
        cout << "\n";
    }

    return 0;
}