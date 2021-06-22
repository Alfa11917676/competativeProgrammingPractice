#include <bits/stdc++.h>
using namespace std;
//vector <int> binary(vector<int> &v1)
int main()
{
    int counter = 0;
    int another = 10, sum = 0;
    for (int i = 0; i < another; i++)
    {
        sum += 13 % 2;
        another = 13 / 2;
        cout << sum << " " << another << " " << endl;
        counter++;
    }
    cout << counter;
}