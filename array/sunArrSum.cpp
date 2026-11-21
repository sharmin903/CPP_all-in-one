#include<iostream>
#include <vector>
using namespace std;
int subSum(vector<int>v, int A, int B){
    int sum=0;
    for(int i=A; i<=B;i++){
        sum+=v[i];
    }
    return sum;
}
int main(){
int N, A, B;
cin>> N>>A>>B;
vector<int>v(N);
for(int i=0; i<N;i++){
    cin>>v[i];
}
int result= subSum(v,A,B);
cout<<result;
return 0;
}