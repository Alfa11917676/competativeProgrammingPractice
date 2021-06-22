#include <bits/stdc++.h>
using namespace std;
void repeatedString(string a, string b)
{
    if (a.size() < b.size())
    {
        swap(a, b);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int count = 0;
    string c;
    string d;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (b[i] == b[i + 1])
        {
            count++;
        }
        else
        {
            d.push_back(b[i]);
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j < d.size(); j++)
        {
            if (c[i] == d[j])
            {
                count++;
            }
        }
    }
    int aa=a.size()-count;
    int bb=b.size()-count;
    return (aa+bb);
}
int main()
{
    string s, b;
    cin >> s >> b;
    repeatedString(s, b);
}