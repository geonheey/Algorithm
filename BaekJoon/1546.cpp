#include <bits/stdc++.h>

using namespace std;

int N, M;
double result;


int main(){
    cin >> N;
    int arr[N];
    for (int i=0; i < N; i++){
        cin >> arr[i]; 
    }

    sort(arr, arr + N, greater<>());

    M = arr[0];
    for (int i = 0; i < N; i++)
    {
        result += (static_cast<double>(arr[i]) / M) * 100;
    }

    cout << result / N << endl;
    return 0;
}