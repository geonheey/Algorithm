#include <bits/stdc++.h>
using namespace std;

const int n = 3;
int fields[3][3];
int result = INT_MAX;

int find_minimum_equal_height(vector<int> &lst)
{
    sort(lst.begin(), lst.end());
    int value = abs(lst[0] - lst[1]) + abs(lst[1] - lst[2]);
    return value;
}
int main()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> fields[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> lst_row;
        vector<int> lst_col;

        for (int j = 0; j < n; j++)
        {
            lst_row.push_back(fields[i][j]);
            lst_col.push_back(fields[j][i]);
        }

        result = min(find_minimum_equal_height(lst_col), result);
        result = min(find_minimum_equal_height(lst_row), result);
        if (result == 0)
        {
            break; // 더 이상 계산할 필요가 없으므로 종료
        }
    }

    cout << result << endl; // 결과 출력
    return 0;
}