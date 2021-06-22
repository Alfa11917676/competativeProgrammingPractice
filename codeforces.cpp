#include <bits/stdc++.h>
using namespace std;
void calculate(vector<int> &v, int n)
{
    static int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    
    if (n = 0)
    {
        if (sum = 0)
            cout << "YES";

        else
            cout << "NO";
    }
}
int main()
{
    int n;
    int val = 0;
    cin >> n;
    int data;
    vector<int> v1;
    while (n != 0)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> data;
            v1.push_back(data);
        }
        n--;
        calculate(v1, n);

        v1.clear();
    }
}