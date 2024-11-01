#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;
#define X first
#define Y second

using namespace std;
int board[102][102];
int n; // board의 크기 결정
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void AppleMap() // 사과 넣은 board 확인용
{

    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
    }
}

void PutApple() // 사과의 넣기
{
    int x;
    cin >> x;
    int a, b;
    while (x--)
    {
        cin >> a >> b;
        board[a - 1][b - 1] = 1;
    }
}

void Cmd()
{
    int c;
    cin >> c;
    while (c--)
    {
        int s;
        string dir;
        cin >> s >> dir;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0;
        }
    }
    PutApple();
    AppleMap();
    Cmd();
}