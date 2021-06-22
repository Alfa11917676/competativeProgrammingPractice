#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N != 0)
    {
        string s1;
        cin >> s1;
        int first = 0, second = 0;
        int sum = 1;
        long unsigned int i;
        sort(s1.begin(), s1.end());
        for (i = 0; i < s1.size(); i++)
        {
            if (i == s1.size() - 1)
            {

                break;
            }
            if (s1[i] == s1[i + 1])
            {
                // cout << s1[i] << " " << s1[i + 1] << endl;
                sum++;
                //cout << sum << " " << endl;
            }
            else
            {
                if (sum > first)
                {
                    second = first;
                    first = sum;
                }
                else
                {
                    second = sum;
                }
                sum = 1;
            }
        }
        vector<int> v1;
        v1.push_back(first);
        v1.push_back(second);
        v1.push_back(sum);
        sort(v1.begin(), v1.end());
        auto it = v1.begin();
        if (it[0] + it[1] == it[2])
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
        N--;
    }
}