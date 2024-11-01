#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, length, speed;
    int answer = 0;
    vector<int> limit, check;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> length >> speed;
        for (int j = 0; j < length; j++)
            limit.push_back(speed);
           
    }

    for (int i = 0; i < M; i++)
    {
        cin >> length >> speed;
        for (int j = 0; j < length; j++){
            check.push_back(speed);
        }
        cout << check[i];
    }

    for (int i = 0; i < 100; i++)
        answer = max(answer, check[i] - limit[i]);

    cout << answer;
    return 0;
}
