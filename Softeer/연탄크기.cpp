#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> radii(n);

    // 입력받기
    for (int i = 0; i < n; i++)
    {
        cin >> radii[i];
    }

    // 최대 반지름 찾기
    int max_radius = *max_element(radii.begin(), radii.end());

    int res = 0;

    // 2부터 최대 반지름까지 반복
    for (int i = 2; i <= max_radius; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            // j번째 난로의 반지름이 i의 배수인지 확인
            if (radii[j] % i == 0)
            {
                cnt++;
            }
        }
        // 사용 가능한 집의 수 업데이트
        res = max(res, cnt);
    }

    cout << res << endl;

    return 0;
}
