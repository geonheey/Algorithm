#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // 2차원 벡터를 생성 -> n행 m열 크기의 2D 배열을 생성
    vector<vector<int>> grid(n, vector<int>(m));

    // 2차원 배열 입력 받기
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int L1, R1;
    cin >> L1 >> R1;
    L1--;
    R1--;
    for (int row = L1; row <= R1; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (grid[row][col] == 1)
            {
                grid[row][col] = 0;
                break;
            }
        }
    }
    int L2, R2;
    cin >> L2 >> R2;
    L2--;
    R2--;
    for (int row = L2; row <= R2; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (grid[row][col] == 1)
            {
                grid[row][col] = 0;
                break;
            }
        }
    }

    int remaining = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
                remaining++;
        }
    }
    cout << remaining << '\n';

    return 0;
}
