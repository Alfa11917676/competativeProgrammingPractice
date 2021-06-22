#include<bits/stdc++.h>
#include<utility>
using namespace std;
int gcd(int first,int second){
		if(first<second) return gcd(second , first);
		 if (second==0)return first;
		 swap(first,second);
		 return gcd(first,second%first);		
}
int main(){
	int first=6;int sec=16;
	cout<<gcd(first,sec)<<endl;
}
