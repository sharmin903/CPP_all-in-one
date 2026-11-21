#include<iostream>
using namespace std;
int& getElement(int arr[],int id){
    return arr[id];
}
int main(){
    int arr[3]={3,4,8};
    cout<<"Before: ";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    int& thing=getElement(arr,1);
    thing=44;
    cout<<"After: ";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    return 0;
}