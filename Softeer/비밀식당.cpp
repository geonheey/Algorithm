#include <bits/stdc++.h>
using namespace std;

int M, N, K;

int main(int argc, char **argv)
{
    string menu(M, ' ');
    string num(N, ' ');
    cin >> M >> N >> K;
    for (int i = 0; i < M; i++)
    {
        cin >> menu[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    if(num.find(menu)!=string::npos){
        cout << "secret";
    }else{
        cout << "normal";
    }  
    return 0;
}