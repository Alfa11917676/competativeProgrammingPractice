#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>l;
    l.assign({10,40,20,30,10});
    l.push_front(1);
    l.pop_front();
    for (auto x:l){
        l.sort();
        cout<<x<<endl;
    }
    for (auto it=l.begin();it!=l.end();it++){
                 //
                 l.sort();       cout<<*it;
    }
    l.remove(20);
    for (auto x:l){
            l.sort();
        cout<<x<<endl;
    }
}