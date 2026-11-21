#include<iostream>
using namespace std;
void deleting(int arr[],int n,int index){
    for(int j=index;j<n-1;j++){
        arr[j]=arr[j+1];
    }
}
int main(){
    int arr[10]={3,6,7,5,3};
    int n=5;
    deleting(arr,n,2);
    n--;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}