#include <bits/stdc++.h>

using namespace std;

double H, W, N, M;

int main()
{
    cin >> H >> W >> N >> M;

    cout << (long long)ceil(H / (N + 1)) * (long long)ceil(W / (M + 1));
    return 0;
}
