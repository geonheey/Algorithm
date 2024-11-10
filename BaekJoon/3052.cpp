#include <bits/stdc++.h>

using namespace std;
int arr[11], cnt;
int main() {
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i]%=42;
    }
    set<int> uniqueRemainders;

    for (int i = 0; i < 10; i++)
    {
        uniqueRemainders.insert(arr[i]);
    }

    cout << uniqueRemainders.size() << endl;
    return 0;
}