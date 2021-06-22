#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
void printSolution(int arr[],int num[],int n){
//	
//	for (int i=0;i<n;i++){
//		v.push_back([arr[i],num[i]);
//	}
//	sort(v.begin(),v.end());
//	for (int i=0;i<n;i++){
//		std::cout<<v[i].first<<" "<<v[i].second<<endl;		
//	}
}
int main(){
	vector<pair<int,int> >p1;
	vector<int>elemts;
	int data;
	for(int i=0;i<5;i++){
		cin>>data;
		elemts.push_back(data);
	}
	for(int j=0;j<5;j++){
			p1.push_back({elemts[j],j});
	}
	sort(p1.begin(),p1.end());
	for(int k=0;k<5;k++){
		cout<<p1[k].first<<" "<<p1[k].second<<endl;
	}
}
