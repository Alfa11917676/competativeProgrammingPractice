//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
//#include <deque>
using namespace std;
int main()
{

    vector<int> v1;
    vector<int> v2;
    int t;
    cin >> t;
    while (t != 0)
    {

        int n;
        cin >> n;
        int data;
        for (int i = 0; i < n; i++)
        {
            cin >> data;
            v1.push_back(data);
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int datas;
            cin >> datas;
            v2.push_back(datas);
        }

        int flag = 0;
        for (int i = 0; i < v2.size(); i++)
        {
            for (int j = 0; j = v1.size(); j++)
            {
                if (v2[i] == v1[j])
                {
                    flag++;
                }
            }
        }
        //        cout << flag;
        if (flag == v2.size())
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        //       decider(v1, v2);
        t--;
    }
}