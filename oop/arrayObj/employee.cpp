#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    string name;
    float age;
    public:
    void getdata();
    void putdata();
};
void employee::getdata(){
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
}
void employee::putdata(){
cout<<"Name: "<<name<<"\n";
cout<<"Age: "<<age<<"\n";
}
const int size=3;
int main(){
    employee manager[size];
    for(int i=0;i<size;i++){
        
    }
}
