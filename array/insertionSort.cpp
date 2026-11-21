#include<iostream>
using namespace std;
void insert(int arr[],int n, int index, int element){
    for(int j=n-1; j>=index;j--){
        arr[j+1]=arr[j];
    }
    arr[index]=element;
}
int main(){
    int arr[10]={2,4,1,7,9};
    int n=5;
    insert(arr,n,3,8);
    n++;
    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}