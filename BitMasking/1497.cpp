#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
long long state[10];

int one_cnt(long long x)
{
    int one = 0;
    for (int i = 0; i < m; i++)
    {
        one += ((x >> i) & 1);
    }
    return one; // 1의 개수를 구하는 함수
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string name, tmp;
        cin >> name >> tmp;
        for (int j = m - 1; j >= 0; j--)
        {
            state[i] = (state[i] << 1) | (tmp[j] == 'Y'); // state[i]를 구성할 때 state[i]를 left shift로 왼쪽으로 한 칸씩 밀면서 OR <외우기>
            // 반대로 하는 이유는 아래 1LL < i 에서 체크하기 편하게
        } // 0으로 초기화된 state[i]에 tmp가 Y인것은 1로 설정, 아닌 것은 0으로 채우는 것
    }
    pair<int, int> ans = {0, -1}; //{연주할 수 있는 곡, 필요한 기타의 수}; 연주할 수 없는 곡이 없으면 기타의 수는 -1
    for (int tmp = 0; tmp < (1 << n); tmp++)
    // tmp는 1부터 16까지 이진수로 하나씩 증가
    // tmp = 1101이면 gibson, fender,esp를 연주할 수 있다는 뜻
    {
        long long comb = 0;
        for (int i = 0; i < m; i++)
        {
            if ((tmp & (1LL << i)) == 0)
                continue;
            comb |= state[i];
        }
        int song_num = one_cnt(comb);
        int guitar_num = one_cnt(tmp);
        if (ans.first < song_num)
            ans = {song_num, guitar_num};
        else if (ans.first == song_num && ans.second > guitar_num)
            ans = {song_num, guitar_num};
    }
    cout << ans.second << '\n';
}
