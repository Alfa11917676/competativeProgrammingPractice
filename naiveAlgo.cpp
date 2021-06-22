#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[10];
    int data;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        arr[i] = data;
    }
    int k;
    cin >> k;
    for (int i = 0; i < n - k + 1; i++)
    {
        int mx = arr[i];
        cout << mx << endl;
        for (int j = i + 1; j < i + k; j++)
        {
            mx = max(arr[j], mx);
        }
        cout << mx << endl;
    }
}