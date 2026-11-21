#include<iostream>
using namespace std;
void linearSort(int arr[],int n,int key){
    int i=0;
    while (i<n)
    {
       if(arr[i]==key){
        cout<<"Element found: "<< arr[i];
        return;
       }
       i++;
    }
    cout << "Element not found";
    
}
int main(){
    int n=6;
    int arr[]={3,7,4,2,6,9};
    int key=3;
    linearSort(arr,n,key);
    return 0;
}