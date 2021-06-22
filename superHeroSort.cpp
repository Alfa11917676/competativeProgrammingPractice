#include <bits/stdc++.h>
using namespace std;
class sHero
{
public:
    int inteligence = 0;
    int power = 0;
    int villian = 0;
    vector<int> v1;
    int count = 0;
    void superHero(int i, int p, int v)
    {
        if (i >= inteligence || p >= power || v >= villian)
        {
            if (i > inteligence && p > power && v > villian)
            {
                inteligence = i;
                power = p;
                villian = v;
                v1.push_back(inteligence);
                v1.push_back(power);
                v1.push_back(villian);
            }
        }
        else
        {
            //cout << i << " " << p << " " << v << " " << endl;
            count++;
        }
    }
    int counter()
    {
        return count;
    }
};
int main()
{
    int i, p, v,N;
    cin>>N;
    sHero s1;
    for (int j = 0; j < N; j++)
    {
        cin >> i >> p >> v;
        s1.superHero(i, p, v);
    }
    cout << s1.counter();
}