#include <iostream>
#include <deque>
using namespace std;
void data(int arr[], int n, int k)
{
    deque<int> diq;
    for (int i = 0; i < k; i++)
    {
        while (!diq.empty() && arr[i] >= arr[diq.back()])
        {
            diq.pop_back();
        }
        diq.push_back(i);
    }
    for (int i = k; i < n; i++)
    {
        cout << arr[diq.front()];
        while (!diq.empty() && arr[i] >= arr[diq.back()])
            ;
        {
            /* code */
            diq.pop_back();
        }
        while (!diq.empty() && diq.front() <= i - k)
        {
            /* code */
            diq.pop_front();
        }
        diq.push_back(i);
        cout << arr[diq.front()];
    }
}
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }
    int n;
    cin >> n;
    int k;
    cin >> k;
    data(arr, n, k);
}