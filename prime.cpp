#include<bits/stdc++.h>
#include <list>
using namespace std;

int main(){
list<int>l1;int runner=9,limit=10;
while(runner!=1){
	if(limit%runner==0){
		if(limit==runner || limit==1){ 
				    l1.push_back(limit);
		}else{
					limit--;runner;
		}
	}
	else{limit--;runner--;}
    }
	cout<<l1.size();   
}
