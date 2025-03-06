#include <bits/stdc++.h>

using namespace std;
int v, e, ret;
vector<vector<int>> graph;
vector<bool> visited;
int bfs(int x)
{

    queue<int> q;
    q.push(x);
    visited[x] = true;
    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int next : graph[current])
        {
            if (!visited[next])
            {
                q.push(next);
                visited[next] = true;
                ret += 1;
            }
        }
    }
    return ret;
}
int main()
{
    cin >> v >> e;
    graph.assign(v + 1, vector<int>()); // 그래프 크기 초기화
    visited.assign(v + 1, false);       // 방문 배열 초기화
    int n, m;
    for (int i = 0; i < e; i++)
    {
        cin >> n >> m;
        graph[n].push_back(m);
        graph[m].push_back(n);
    }

    for (int i = 1; i <= v; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    cout << bfs(1) << "\n";
    return 0;
}