#include <bits/stdc++.h>

using namespace std;
int n;

int main()
{
    cin >> n;
    deque<pair<int, int>> balloons;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        balloons.push_back({i, num});
    }

    vector<int> result;
    while (!balloons.empty())
    {
    }
}
