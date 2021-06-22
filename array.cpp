#include <bits/stdc++.h>
using namespace std;
long long int  nBinaryTree(int h){
    if (h==0 || h==1){
        return 1;
    }
    long long int A= nBinaryTree(h-1);
    long long int B =nBinaryTree(h-2);
    long long int max=pow(10,9)+7;
    long long int answer = (A*A+2*A*B)%max;
    return answer;
}

int main(){
    int h=8;
    cout<<nBinaryTree(h)<<endl;
}
