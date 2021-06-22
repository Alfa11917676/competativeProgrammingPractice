#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    int c = 0;
    int o = 0;
    int v = 0;
    int i = 0;
    int d = 0;
    getline(cin, s1);
    for (int j = 0; j < s1.size(); j++)
    {
        if (s1[j] == 'c' || s1[j] == 'C')
        {
            c++;
            continue;
        }
        if (s1[j] == 'd' || s1[j] == 'D')
        {
            d++;
            continue;
        }
        if (s1[j] == 'o' || s1[j] == 'O')
        {
            o++;
            continue;
        }
        if (s1[j] == 'i' || s1[j] == 'I')
        {
            i++;
            continue;
        }
        if (s1[j] == 'v' || s1[j] == 'V')
        {
            v++;
            continue;
        }
    }
        

}