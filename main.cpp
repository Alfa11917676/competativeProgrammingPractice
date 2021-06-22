//divide and conquor
#include <iostream>
#define size 10
using namespace std;
int BinarySearch(int arr[],int start,int end,int key){
    if (start<=end){
    int mid;
    mid=(start+end)/2;
    if (arr[mid]==key){
        cout<<"The element is found @ "<<mid<<" "<<start<<" "<<end;
        return 1;
    }
    if (arr[mid]<key){
        return BinarySearch(arr,mid+1,end,key);
    }
    else{
        return BinarySearch(arr,start,mid-1,key);
        }
    }
    else{
        cout<<"Element not found";
    }
}
int main(){
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    BinarySearch(arr,0,size-1,key);
}