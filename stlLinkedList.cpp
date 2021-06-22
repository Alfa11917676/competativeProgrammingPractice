#include<iostream>
#include<forward_list>
#include<bits/stdc++.h>
using namespace std;
int main(){
	forward_list<int>l={12,33,123};
//	l.assign({10,20,30});
	for (auto x:l){
		cout<<x;
	}
}
