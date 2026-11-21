#include <iostream>
using namespace std;
class Sample{
    private:
    int a;
    int b;
    public:
    void setData(){
        a=35;
        b=67;
    }
    friend float mean(Sample s);
};
float mean(Sample s1){
    return float(s1.a+s1.b)/2.0;
}
int main(){
    Sample x;
    x.setData();
    cout<<"Mean of friend: "<<mean(x)<<endl;
    return 0;
}