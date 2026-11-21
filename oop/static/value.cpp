#include<iostream>
using namespace std;
class item{
    static int count;
    int num;
    public:
    void getData(int b){
        num=b;
        count ++;
    }
    void showData(){
        cout<<"Per function count:"<<count<<endl;
    }
};
int item::count=0;
int main(){
    item a,b,c;
    cout<<"Before taking any data input: "<<"\n";
    a.showData();
    b.showData();
    c.showData();

    a.getData(234);
    b.getData(567);
    c.getData(234);

    cout<<"After taking any data input: "<<"\n";
    a.showData();
    b.showData();
    c.showData();
    return 0;


}