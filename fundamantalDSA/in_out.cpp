#include<iostream>
#include <string>
using namespace std;
int main(){
    int x;
    cin >> x;
    string name;
    getline(cin,name);//read the entire line along with the white space
    cout << "hello !"<<name;

}