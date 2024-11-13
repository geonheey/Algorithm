#include <bits/stdc++.h>
using namespace std;
int n, num, result;
string input;
int main()
{
    cin >> n;
    stack<int> stack;
    for (int i = 0; i < n; i++)
    {
        cin >> input;

        if (input == "push")
        {
            cin >> num;
            stack.push(num);
        }
        else if (input == "pop")
        {
            if (stack.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                result = stack.top();
                cout << result << endl;
                stack.pop();
            }
        }
        else if (input == "size")
        {
            cout << stack.size() << endl;
        }
        else if (input == "empty")
        {
            if (stack.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if (input == "top")
        {

            if (stack.empty())
                cout << -1 << endl;
            else
                cout << stack.top() << endl;
        }
    }
    return 0;
}