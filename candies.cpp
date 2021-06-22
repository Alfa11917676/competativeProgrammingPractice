#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int arr[10];
        int something = 0;
        for (int i = 0; i < 10; i++)
            cin >> arr[i];

        int temp = 0;
        for (int i = 0; i < 10; i++)
        {
            int val1 = 1;
            if (arr[i] > arr[i + 1])
            {
                arr[i] = 1 + val1;
                if (arr[i] + 1 > arr[i] - 1)
                {
                    something = 0;
                }
            }
            else if (arr[i] < arr[i + 1])
            {
                arr[i] = val1 + something;

                something++;
            }
        }
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
            sum += arr[i];
        }
        cout << sum << endl;
        n--;
    }
}