#include<iostream>
#include<vector>
using namespace std;
main(){
	/*int arr[]={12,13,14};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int>v(arr,arr+n);
	vector<int>::iterator i;
	for (i=v.begin();i != v.end();i++){
		cout<<(*i)<<" ";
	}
	return 0;*/
	vector <int> v;
		v.push_back(212);	v.push_back(122);
	v.push_back(121);
	vector<int>::iterator it;
	it = v.insert(v.begin(),22);
	cout<<*it;
	v.front();v.end();
	v.insert(v.begin()+2,200);
	v.insert(v.begin(),3,900);
	for (it=v.begin();it=v.end();it++)
	{cout<<*it
	;}
}
