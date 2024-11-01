#include <bits/stdc++.h>
using namespace std;
struct Info
{
    int weight;
    int price_per_unit;
};
int main()
{
    int W, N;
    cin >> W >> N;
    vector<Info> total(N);

    for (int i = 0; i < N; i++)
    {
        cin >> total[i].weight >> total[i].price_per_unit;
    }
    reverse(total.begin(), total.end());

    int max_value = 0;
    for (int i = 0; i < N; i++)
    {
        if (total[i].weight <= W)
        {
            max_value += total[i].weight * total[i].price_per_unit; // 140
            W -= total[i].weight;                                   // 30
        }
        else
        {
            max_value += W * total[i].price_per_unit;
            W = 0;
        }
    }

    cout << max_value << endl;

    return 0;
}
