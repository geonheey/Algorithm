#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int image[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> image[i][j];
        }
    }
    int tot;
    if (N <= 2 || M <= 2)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                tot += image[i][j];
            }
        }
        float ans = tot / 4;
        cout << ans;
    }
    else
    {
        int newN = N / 2;
        int newM = M / 2;

        int resized[newN][newM];

        for (int i = 0; i < newN; i++)
        {
            for (int j = 0; j < newM; j++)
            {
                int sum = 0;
                sum += image[i * 2][j * 2];
                sum += image[i * 2][j * 2 + 1];
                sum += image[i * 2 + 1][j * 2];
                sum += image[i * 2 + 1][j * 2 + 1];

                resized[i][j] = sum / 4;
                cout << resized[i][j] << " ";
            }
            cout << endl; // 줄 바꿈
        }
    }
    return 0;
}