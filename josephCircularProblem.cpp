#include <iostream>
#include <list>
#include <vector>
#include <utility>
using namespace std;
void replace(list<int> &l, int num, vector<int> &seq)
{
    vector<int> vec;
    for (auto x : l)
    {
        vec.push_back(x);
    }
    auto it = find(vec.begin(),vec.end(),num);
    it=vec.erase(num);
    
    
    for (auto x : vec)
    {
        cout << *it;
    }
}
int main()
{
    list<int> l1;
    int num;
    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        l1.push_back(num);
    }
    for (auto x : l1)
    {
        cout << x << " ";
    }
    vector<int> seq{12, 11, 32};
    replace(l1, 10, seq);
}