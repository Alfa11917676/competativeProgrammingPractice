#include <bits/stdc++.h>
using namespace std;
char isPossible(char c)
{
    c = c - 32;
    return c;
}
int main()
{
    string a, b;
    string c;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    { //b,C,a,d,E
        for (int j = 0; j < b.size(); j++)
        { //ADC
            if (a[i] == b[j])
            {
                c.push_back(b[j]);
            }
            else if (b[i] == isPossible(a[j]))
            {
                c.push_back(b[j]);
            }
        }
    }
    if (c.size() >= b.size())
    {
        cout << "YES"
             << " " << c;
    }
    else
    {
        cout << "NO";
    }
}