#include <bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> c)
{
    int size = c.size();
    int jump = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            if (c[i] == 1)
                break;
            else
            {
                jump++;
                break;
            }
        }
        if (c[i] != c[i + 1] || c[i] == c[i + 2])
        {
            jump++;
            i++;
        }
        // }
        // else if ()
        // {
        //     jump++;i++;
        // }
        else if (c[i] == c[i + 1])
            jump++;
    }
    return jump - 1;
}
int main()
{
    int data;
    vector<int> v;
    for (int i = 0; i < ; i++)
    {
        cin >> data;
        v.push_back(data);
    }
    cout << jumpingOnClouds(v);
}