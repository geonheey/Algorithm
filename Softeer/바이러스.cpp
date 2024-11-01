#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main()
{
    long long K, P, N;
    cin >> K >> P >> N;

    long long result;

    long long power = 1;
    for (int i = 0; i < N; i++)
    {
        power = (power * P) % MOD;
        // 모듈로 연산의 성질에 따르면,
        // 두 수의 곱에 모듈로 연산을 적용하는 것은 결과적으로 같은 값을 유지
    }
    cout << power << endl;
    result = (K * power) % MOD;

    cout << result << endl;

    return 0;
}
