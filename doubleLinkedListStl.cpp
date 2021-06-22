#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1 = {12, 13, 141, 51, 1, 34};
    l1.pop_front();
    l1.pop_back();

    for (auto x : l1)
        cout << x << endl;
    auto it = l1.begin();
    it++;
    l1.insert(it, 12);
    l1.insert(it, 5, 7);
    l1.sort();
    for (auto x : l1)
        cout << x << endl;
}