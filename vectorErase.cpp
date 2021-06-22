#include<bits/stdc++.h>
using namespace std;
int main(){
	vector <int> v1;
	v1.push_back(3);
		v1.push_back(31);
			v1.push_back(23);
				v1.push_back(43);
					v1.push_back(53);
	for (int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	v1.erase(v1.begin()+2,v1.begin()+4);
	for (int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
}
