#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> gears(8);

    for (int i = 0; i < 8; i++)
    {
        cin >> gears[i];
    }

    bool isAscending = true;
    bool isDescending = true;

    for (int i = 0; i < 7; i++)
    {
        if (gears[i] < gears[i + 1])
        {
            isDescending = false;
        }
        else if (gears[i] > gears[i + 1])
        {
            isAscending = false;
        }
    }

    if (isAscending)
    {
        cout << "ascending" << endl;
    }
    else if (isDescending)
    {
        cout << "descending" << endl;
    }
    else
    {
        cout << "mixed" << endl;
    }

    return 0;
}
// 방법2
// string s(8, ' ');

// int main()
// {
//     for (int i = 0; i < 8; i++)
//         cin >> s[i];
//     if (s == "12345678")
//         cout << "ascending";
//     else if (s == "87654321")
//         cout << "descending";
//     else
//         cout << "mixed";
// }