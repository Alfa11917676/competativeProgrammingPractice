#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int checkPrime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {
                count += 1;
            }
            else
            {
                count += 2;
            }
        }
    }
    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int data;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        v1.push_back(data);
    }
    int negative = 0;
    int negtemp = 0;
    int temp = 0;
    int mainReturn;
    for (int i = 0; i < n; i++)
    {

        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (checkPrime(v1[j]) == 1)
            {
                v1.push_back(v1[j]);
                count += 1;
            }
            while (count == 1)
            {
                v1.push_back(v1[j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (v1[i] < 0)
                negative++;
            if (v1.size() > temp && negative > negtemp)
            {
                temp = v1.size();
                negtemp = negative;
            }
        }
    }
    cout << temp;
    return 0;
}