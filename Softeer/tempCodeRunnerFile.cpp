#include <bits/stdc++.h>

using namespace std;

int N;
int main()
{
    cin >> N;

    int res = 2;
    if (N == 0)
    {
        res = pow(res, res);
    }
    else
    {
        int a = 2;
        for (int i = 2; i < N + 2; i++)
        {
            a += pow(2, i - 2);
        }
        res = a * a;
    }
    cout << res;
    return 0;
}