#include <bits/stdc++.h>
using namespace std;

int W, N, M, P;
int answer;
vector<pair<int, int>> items;

int main()
{
    cin >> W >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> M >> P; //{무게, 가격}순으로 입력
        items.push_back({P, M});
        //{가격, 무게}순으로 삽입 <- 가격 기준으로 sort해야 무게당 가격을 최대화하는 데 도움이 됩
    }

    sort(items.begin(), items.end(), greater<>());
    // pair의 첫 번째 요소를 기준으로 내림차순으로 정렬
    // {{2, 70}, {1, 90}}

    for (auto p : items)
    {
        int small_w = min(p.second, W);
        W -= small_w;
        answer += (small_w * p.first);
    }

    cout << answer;
    return 0;
}