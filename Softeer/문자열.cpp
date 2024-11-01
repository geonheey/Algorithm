#include <iostream>
#include <string>
#include <stack>

using namespace std;

string makeExpression(const string &s)
{
    string result;   // 최종 수식을 저장할 문자열
    stack<char> stk; // 열린 괄호를 저장할 스택

    for (char c : s)
    {
        if (c == '(')
        {
            result += '('; // 열린 괄호 추가
            stk.push('('); // 스택에 열린 괄호 추가
        }
        else if (c == ')')
        {
            stk.pop();      // 짝이 맞는 열린 괄호 제거
            result += "1)"; // 기본적으로 `1`을 추가한 후 닫힌 괄호 추가

            // 스택이 비어있지 않으면 다음 수식을 위해 `+`를 추가
            if (!stk.empty())
            {
                result += "+";
            }
        }
    }
    return result;
}

int main()
{
    string S;
    cin >> S; // 입력으로 주어진 괄호 문자열 S

    string expression = makeExpression(S);
    cout << expression << endl; // 결과 수식 출력

    return 0;
}
