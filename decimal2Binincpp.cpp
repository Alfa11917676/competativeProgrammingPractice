#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, K, data;
    vector<int> v1;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> data;
        v1.push_back(data);
    }
    vector<int> v2;
    int temp = 0;
    auto it = v1.begin();
    for (int j = 0; j < N; j++)
    {
        for (int l = j; l < K; l++)
        {
            int sum = 0;
            bitset<8> binary(it[l]);
            for (int a = 0; a < 8; a++)
            {
                sum += binary[a];
                if (sum >= temp)
                {
                    int convert = binary.to_ullong();
                    temp = convert;
                    cout << "temp is " << temp << " "
                         << "convert is " << convert << endl;
                }
            }
            v2.push_back(temp);
        }
    }
    for (int i = 0; i < N; i++)
        cout << v2[i];
    return 0;
}