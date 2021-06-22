#include <bits/stdc++.h>
#include <vector>

using namespace std;

void sortFunc(vector<int> &val)
{
    sort(val.begin(), val.end());
    for (int i = 0; i < val.size(); i++)
    {
        cout << val[i] << " ";
    }
    cout << endl;
    val.clear();
}

int main()
{
    //write your code here
    int T;
    int N;
    cin >> T;
    vector<int> v1;
    while (T != 0)
    {
        cin >> N;
        int data;
        for (int i = 0; i < N; i++)
        {
            cin >> data;
            v1.push_back(data);
        }
        sortFunc(v1);
        T--;
    }
}
