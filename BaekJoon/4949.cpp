#include <bits/stdc++.h>

using namespace std;
string inputString;

string checkBal(string input)
{
    stack<char> ps;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '(' || input[i] == '[')
        {
            ps.push(input[i]);
        }
        else if (input[i] == ')')
        {
        }
        else if (input[i] == ']')
        {
        }
    }
    if (ps.empty())
    {
        return "yes";
    }

    else
    {
        return "no";
    }
}
int main()
{
    while (true)
    {
        string input;
        getline(cin,input);

        if (input == ".")
        {
            break; // 입력 종료 조건
        }

        // 점을 제거하고 checkBal 함수로 전달
        input.pop_back(); // 마지막 '.' 제거
        cout << checkBal(input) << endl;
    }
    return 0;
}