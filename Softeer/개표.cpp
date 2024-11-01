#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> numbers(N);

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < N; i++)
    {
        int M = numbers[i];
        if (M >= 5)
        {
            int k = M / 5;

            int j = M % 5;
            for (int i = 0; i < k; i++)
            {
                cout << "++++" << " ";
            }

            for (int i = 0; i < j; i++)
            {
                cout << '|';
            }
        }
        else
        {
            for (int i = 0; i < M; i++)
            {
                cout << '|';
            }
        }
        cout << "\n";
    }

    return 0;
}