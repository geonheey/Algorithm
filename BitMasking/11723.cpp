#include <iostream>
#include <algorithm>
// 비트 연산자로
using namespace std;
int state;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        string cmd;
        int x;
        cin >> cmd;
        if (cmd == "add")
        {
            cin >> x;
            state |= (1 << (x - 1));
        }
        else if (cmd == "remove")
        {
            cin >> x;
            state &= (~(1 << (x - 1)));
        }
        else if (cmd == "check")
        {
            cin >> x;
            cout << ((state >> (x - 1)) & 1) << '\n';
        }
        else if (cmd == "toggle")
        {
            cin >> x;
            state ^= (1 << (x - 1));
        }
        else if (cmd == "all")
        {
            state = 0xffffff;
        }
        else
        {
            state = 0;
        }
    }
}
