#include <bits/stdc++.h>
using namespace std;

const int MAX = 25;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int N;
bool visited[MAX][MAX];
int arr[MAX][MAX];

// DFS 함수
int dfs(int x, int y)
{
    visited[x][y] = true;
    int ret = 1; // 현재 장애물 포함

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 유효한 범위 내에 있고, 장애물이 있으며, 아직 방문하지 않은 경우
        if (nx >= 0 && ny >= 0 && nx < N && ny < N && arr[nx][ny] && !visited[nx][ny])
        {
            ret += dfs(nx, ny);
        }
    }
    return ret; // 그룹 크기 계산
}

int main()
{
    // 지도의 크기 입력
    scanf("%d", &N);

    // 지도 데이터 입력
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%1d", &arr[i][j]);
        }
    }

    // 블록 크기 저장할 multiset (multiset 특성 상 오름차순으로 자동 정렬됨)
    multiset<int> ans;

    // 각 위치에 대해 DFS 실행
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] && !visited[i][j])
            {
                ans.insert(dfs(i, j));
            }
        }
    }

    // 결과 출력
    printf("%d\n", ans.size());
    for (auto v : ans)
    {
        printf("%d\n", v);
    }

    return 0;
}
