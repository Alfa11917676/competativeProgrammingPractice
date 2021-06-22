//#include <bits/stdc++.h>
#include <list>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// Complete the sockMerchant function below.
int sockMerchant(vector<int> &ar)
{
    sort(ar.end(), ar.begin());
    auto it = ar.begin();
    for (int i = 0; i != ar.size(); i++)
    {
        if (it[ar.size()] == it[ar.size()-1])
        {
            ar.pop_back();
            ar.pop_back();
        }
    }
}
int main()
{

    int data;
    int n;
    cin >> n;
    vector<int> d;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        d.push_back(data);
    }
    sockMerchant(d);
}
