#include <iostream>
#include <list>
#include <vector>
#include <utility>
using namespace std;
void replace(list<int> &l, int num, vector<int> &seq)
{
    list<int>::iterator it;
    it = l.begin();
    l.remove(num);
    list<int> attacers;
    for (int i = 0; i < 3; i++)
    {
        attacers.push_back(i);
    }
    l.merge(attacers);
    for (int j = 0; j < 8; j++)
        cout << *it <<endl;
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
    for (int i = 0; i < 6; i++)
    {
        cout << i;
    }
    vector<int> seq;
	seq.push_back(12);
    seq.push_back(42);seq.push_back(22);
	replace(l1, 10, seq);
}
