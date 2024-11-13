#include <bits/stdc++.h>

using namespace std;
int n;
string input;

string checkVPS(string input)
{
    stack<char> ps;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '(')
        {
            ps.push(input[i]);
        }
        else
        {
            if (ps.empty())
            {
                return "NO"; // ')'가 있으면 push를 하지 않기 때문에 empty가 true
            }
            ps.pop(); // ')'이면 들어왔던 '('를 pop
        }
    }
    if (ps.empty())
    {
        return "YES";
    }

    else
    {
        return "NO";
    }
}
int main()
{
    cin >> n;
    string ps;
    for (int i = 0; i < n; i++)
    {
        cin >> ps;
        cout << checkVPS(ps) << endl;
    }

    return 0;
}