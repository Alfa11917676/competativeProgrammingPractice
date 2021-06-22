#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T != 0)
    {
        int N, X;
        cin >> N;
        set<int> s;
        int data;
        for (int i = 0; i < N; i++)
        {
            cin >> data;
            s.insert(data);
        }
        vector<int> v;
        for (auto it = s.begin(); it != s.end(); it++)
            v.push_back(*it);
        cin >> X;
        int count = 0;
        for (auto input : v)
        {
            if (input < X)
            {
                count++;
                X -= input;
            }
        }
        cout << count;
    }
}
