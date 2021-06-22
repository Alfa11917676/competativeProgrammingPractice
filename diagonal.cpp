#include <bits/stdc++.h>
using namespace std;

int main()
{
    int data;
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n * 3; i++)
    {
        cin >> data;
        vec.push_back(i);
    }
    int sum = 0;
    for (int i = 1; i <= vec.size(); i++)
    {
        //if (i + 5 > vec.size())
        //  break;
        sum += vec[i];

        cout << vec[i] << " " << sum << endl;
    }
    cout << endl
         << " " << sum;
}