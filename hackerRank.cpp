#include <bits/stdc++.h>
using namespace std;
vector<int> binaryFinder(vector<int> &v2)
{
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N, data;
    vector<int> v1;
    vector<int> v2;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> data;
        v1.push_back(data);
    }
    int K;
    cin >> K;
    for (int j = 0; j < N; j++)
    {
        for (int l = j; l < K; l++)
        {
            
        }
        binaryFinder(v2);
        
    }
}