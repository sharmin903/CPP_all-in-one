#include<iostream>
using namespace std;
int& getLast(int arr[],int size){
    return arr[size-1];
}
int main(){
    int arr[4]={2,5,6,8};
    cout<<"Before: ";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    int& last=getLast(arr,4);
    last=4;
    cout<<"Before: ";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    return 0;

}