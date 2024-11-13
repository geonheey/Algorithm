#include <bits/stdc++.h>

using namespace std;
int n, m;

int main()
{
    cin >> n >> m;
    int arr1[100][100];
    int arr2[100][100];
    int result[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}