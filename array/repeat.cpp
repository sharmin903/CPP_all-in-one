#include<iostream> 
using namespace std;
int check(int n, int a[]){
    int most=0;
    for(int i= 0; i<n; i++){
        if(a[i]>a[most]){
            most=i;
        }
    }
    return most;
}
void take(int n,int a[]){
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
}
int main(){
    int n;
    cin>>n;
    int a[10];
    cin>>a[10];
    take(n,a);
    int result= check(n,a);
    cout<<result<<endl;
    return 0;
}