#include <iostream>
#include <utility>
#include <set>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
void sorter(int arr[],char b[],int n){
    pair<int,char>p[n];
    for (int i=0;i<n;i++){
        p[i]={arr[i],b[i]};
    }
    sort(p,p+n);
    for(int j=0;j<n;j++)
    {
        cout<<p[j].first<<" "<<p[j].second<<" "<<endl;}
	vector <int> v1;
	v1.push_back(12);
		v1.push_back(12);	v1.push_back(12);	v1.push_back(12);	v1.push_back(12);	v1.push_back(12);
	
	int arr[4]={10,3,12};
	int n=sizeof(arr)/sizeof(v1[0]);
	vector<int>v(arr,arr+n);
	//vector <int>::iterator it;
	for (auto it =v1.rbegin(); it != v1.rend(); it++){
		cout<<*it<<endl;
	}	
		
}
int main(){
    int arr[]={4,2,5,1,3};
    char aw[]={'a','e','g','b','o'};
    int n=5;
    sorter(arr,aw,n);

}
