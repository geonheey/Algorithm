#include <bits/stdc++.h>

using namespace std;
int N,M,a,b;
int arr[101] = {
    0,
};
void swap(int idx1, int idx2)
{   
    int temp = 0;
    temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}
int main(){
    cin >> N >> M;
    for (int i = 1; i <=N; i++)
    {
        arr[i] = i;
    }
    for(int i=0; i < M; i++){
        cin >> a >> b;
        swap(a,b);
    }
    
    for (int i = 1; i <= N; i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}